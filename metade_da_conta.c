/**
 * IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo: Danilo Jose de Souza Araujo
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

/**
 * Inclusão de bibliotecas:
 */
#include <cs50.h>
#include <stdio.h>

/**
 * Função main
 */
int main(void)
{
    // Solicita o valor da comida:
    float valorComida;
    do
    {
        valorComida = get_float("Valor da comida: ");
    }
    while (valorComida < 10.00 || valorComida > 999.99);

    // Solicita o percentual de impostos:
    float impostos;
    do
    {
        impostos = get_float("Porcentagem de impostos: ");
    }
    while (impostos < 0.00 || impostos > 100.00);

    // Solicita o percentual de gorjeta:
    int gorjeta;
    do
    {
        gorjeta = get_int("Porcentagem da gorjeta: ");
    }
    while (gorjeta < 0 || gorjeta > 100);

    // TODO: coloque aqui seu código para o cálculo do valor da conta.
    // Não se esqueça de imprimir o valor final conforme especificado na
    // descrição do exercício.
    float totalComImposto, totalComGorjeta, valorParaCada;
    // Calcular primeiro o total com imposto (supondo que seja 12,50% para facilitar o meu
    // entendimento) para depois calcular o total com gorjeta (preciso primeiro do total com o
    // imposto)
    totalComImposto = valorComida + (valorComida * impostos / 100);
    // Calcular agora com valor com a gorjeta supondo que seja 10%
    totalComGorjeta = totalComImposto + (totalComImposto * gorjeta / 100);
    // calcular o valor para cada pessoa
    valorParaCada = totalComGorjeta / 2;

    printf("Cada um pagará R$ %.2f!\n", valorParaCada);

    // Termina o programa:
    return 0;
}
