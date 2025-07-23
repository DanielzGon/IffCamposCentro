/*Algoritmo

Início
{
    Programa para calcular o volume de uma caixa d'água
}

Declare
    real volume, comprimento, altura, largura

    escreva("Para encontrar o volume da sua caixa d'água")
    escreva("Digite o comprimento da caixa:")
    leia(comprimento)
    escreva("Digite a altura da caixa:")
    leia(altura)
    escreva("Digite a largura da caixa:")
    leia(largura)

    volume = comprimento * altura * largura

    escreva("volume da caixa d'água: ")
    escreva(volume)

Fim Algoritmo
*/

#include <stdio.h>

int main(void)
{
    float volume, comprimento, altura, largura;
    printf("Para encontrar o volume da sua caixa d'água \n ");
    printf("Digite o comprimento da caixa: \n ");
    scanf("%f", &comprimento);
    printf("Digite a altura da caixa: \n ");
    scanf("%f", &altura);
    printf("Digite a largura da caixa: \n ");
    scanf("%f", &largura);
    volume = comprimento* altura* largura;
    printf("volume da caixa d'água: %f", volume);
    return 0;
}