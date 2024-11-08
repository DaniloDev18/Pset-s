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

#include<cs50.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int contarLetras(string texto);
int contarPalavras(string texto);
int contarSentencas(string texto);


int main(void)
{

    string texto = get_string("Texto: ");

    int letras = contarLetras(texto);
    int palavras = contarPalavras(texto);
    int sentencas = contarSentencas(texto);

    float L = (letras / (float) palavras) * 100;
    float S = (sentencas / (float) palavras) * 100;
    int indice = round(0.0588 * L - 0.296 * S - 15.8);

    if (indice < 1)
    {
        printf("Antes do Grau 1\n");
    }
    else if (indice >= 16)
    {
        printf("Grau 16+\n");
    }
    else
    {
        printf("Grau %i\n", indice);
    }
}

int contarLetras(string texto)
{
    int contagem = 0;
    for (int i = 0; i < strlen(texto); i++)
    {
        if (isalpha(texto[i]))
        {
            contagem++;
        }
    }
    return contagem;
}

int contarPalavras(string texto)
{
    int contagem = 1;
    for (int i = 0; i < strlen(texto); i++)
    {
        if (texto[i] == ' ')
        {
            contagem++;
        }
    }
    return contagem;
}

int contarSentencas(string texto)
{
    int contagem = 0;
    for (int i = 0; i < strlen(texto); i++)
    {
        if (texto[i] == '.' || texto[i] == '!' || texto[i] == '?')
        {
            contagem++;
        }
    }
    return contagem;
}
