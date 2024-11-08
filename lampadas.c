/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo:Danilo Jose de Souza Araujo
 *    Matrícula:202414301
 *    Turma:CC1Mb
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

/**
 * Protótipos das funções
 */
void imprimir_lampada(int bit);

/**
 * MAIN
 */
int main(void)
{
    // TODO: escreva aqui o seu programa!
    string mensagem = get_string("Mensagem: \n");
    int tamanho = strlen(mensagem);
    for (int i = 0; i < tamanho; i++)
    {
        for(int a = BITS_NO_BYTE - 1; a >= 0; a--)
        {
            int bit = (mensagem[i] >> a)& 1;
            imprimir_lampada(bit);
        }
        printf("\n");
    }
    // Termina o programa
    return 0;
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

