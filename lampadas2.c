/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo:Danilo Jose de Souza Araujo
 *    Matrícula:202414301
 *    Turma:CC1MB
 *    Email:dj.araujo027@gmail.com
 *
 * DECLARAÇÃO DE HONESTIDADE ACADÊMICA:
 * Eu afirmo que o código abaixo foi de minha autoria. Também afirmo que não
 * pratiquei nenhuma forma de "cola" ou "plágio" na elaboração do programa,
 * e que não violei nenhuma das normas de integridade acadêmica da disciplina.
 * Estou ciente de que todo código enviado será verificado automaticamente
 * contra plágio e que caso eu tenha praticado qualquer atividade proibida
 * conforme as normas da disciplina, estou sujeito à penalidades conforme
 * definidas pelo professor da disciplina e/ou instituição.
 */

// Comece aqui seu programa
#include <cs50.h>
#include <stdio.h>
#include <string.h>


/**
 * Variáveis e contantes globais
 */
const int BITS_NO_BYTE = 8;
const int MAX_LAMPADAS = 100;


/**
 * Protótipos das funções
 */
void imprimir_lampada(int bit);
void processa_comandos(string comandos[], int num_comandos, int lampadas[], int num_lampadas);

/**
 * MAIN
 */
int main(void)
{
    // TODO: escreva aqui o seu programa!
    int num_lampadas = get_int("Digite o número de lâmpadas (até %d): ", MAX_LAMPADAS);
    int num_comandos = get_int("Digite o número de comandos: ");

    if (num_lampadas > MAX_LAMPADAS)
    {
        num_lampadas = MAX_LAMPADAS;
    }

    int lampadas[MAX_LAMPADAS] = {0};

    string comandos[num_comandos];
    for (int i = 0; i < num_comandos; i++)
    {
        comandos[i] = get_string("Comando %d: ", i + 1);
    }

    processa_comandos(comandos, num_comandos, lampadas, num_lampadas);


    printf("Estado final das lâmpadas:\n");
    for (int i = 0; i < num_lampadas; i++)
    {
        printf("Lâmpada %d: ", i +1);
        imprimir_lampada(lampadas[i]);
        printf("\n");
    }
    // Termina o programa
    return 0;
}

void processa_comandos(string comandos[], int num_comandos, int lampadas[], int num_lampadas)
{
    for (int i = 0; i < num_comandos; i++)
    {
        int lampada_index;
        char comando[10];
        sscanf(comandos[i], "%s %d", comando, &lampada_index);
        lampada_index--;

        if (strcmp(comando, "ON") == 0 && lampada_index < num_lampadas)
        {
            lampadas[lampada_index] = 1;
        }
        else if (strcmp(comando, "OFF") == 0 && lampada_index < num_lampadas)
        {
            lampadas[lampada_index] = 0;
        }
        else if (strcmp(comando, "TOGGLE") == 0 && lampada_index < num_lampadas)
        {
            lampadas[lampada_index] = !lampadas[lampada_index];
        }
    }
}
/**
 * IMPRIMIR_LAMPADA
 * Esta função recebe um inteiro que representa um bit (0 ou 1) e imprime no
 * terminal um Emoji que representa uma lâmpada acesa ou uma lâmpada apagada.
 * Não há nenhum retorno, só a impressão de um lâmpada acessa ou apagada.
 * Note como um Emoji é impresso através de seu código Unicode.
 *
 * Parâmetros:
 *    (int) bit: um número inteiro que pode ser 0 ou 1
 *
 * Retorno:
 *    (void)
 */
void imprimir_lampada(int bit)
{
    if (bit == 0)
    {
        // Emoji que representa uma lâmpada apagada
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Emoji que representa uma lâmpada acessa
        printf("\U0001F7E1");
    }
}

