/*Algoritmo

Início
{
    Programa para converter um valor de metros para centímetros
}

Declare
    real metros, centimetros

    escreva("Digite o valor em metros para converte-lo em centimetros:")
    leia(metros)

    centimetros = metros * 100

    escreva("Metros para centimetros ")
    escreva(centimetros)

Fim Algoritmo

*/

#include <stdio.h>

int main(void)
{
    float metros, centimetros;
    printf("Digite o valor em metros para converte-lo em centimetros: ");
    scanf("%f", &metros);
    centimetros = metros * 100;
    printf("Metros para centimetros %f", centimetros);

    return 0;
}