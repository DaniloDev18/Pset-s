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
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool apenas_digitos(string text);
char rotacionar(char p, int chave);

/**

MAIN*/
int main(int argc, string argv[])
{
    // TODO: Escreva aqui o seu programa
    if (argc != 2 || !apenas_digitos(argv[1]))
    {
        printf("Uso: ./sem_vogais palavra\n");
        return 1;
    }

    int chave = atoi(argv[1]);

    string txt = get_string("Texto puro: ");

    int tamanho = strlen(txt);

    char txtcripto[tamanho + 1];

    for (int i = 0; i < tamanho; i++)
    {
        txtcripto[i] = rotacionar(txt[i], chave);
    }
    txtcripto[tamanho] = '\0';

    printf("Texto cifrado: %s\n", txtcripto);

    // Termina o programa
    return 0;
}

bool apenas_digitos(string text)
{
    int t = strlen(text);

    for (int i = 0; i < t; i++)
    {
        if (!isdigit(text[i]))
        {
            return false;
        }
    }
    return true;
}

char rotacionar(char p, int chave)
{
    char pi, ci;
    if (islower(p))
    {
        pi = p - 97;
        ci = (pi + chave) % 26;
        ci = ci + 97;
    }
    else if (isupper(p))
    {
        pi = p - 65;
        ci = (pi + chave) % 26;
        ci = ci + 65;
    }
    else
    {
        return p;
    }

    return ci;
}
