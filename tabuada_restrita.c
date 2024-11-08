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

// Comece aqui seu programa.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int tabuada = get_int("Você quer a tabuada de qual número? ");
    int x = get_int("Você quer começar a tabuada em qual número? ");
    int y = get_int("Você quer terminar a tabuada em qual número? ");

    if (x <= y)
    {
        for (int i = x; i <= y; i++)
        {
            printf("%i x %i = %i\n", tabuada, i, tabuada * i);
        }
    }
    else
    {
        printf("Erro na especificação da tabuada.");
    }
    return 0;
}
