/*Algoritmo

Início
{
    Programa para trocar os valores de A e B
}

Declare
    real A, B, C

    escreva("Digite um valor para A:")
    leia(A)
    escreva("Digite um valor para B:")
    leia(B)

    C = A
    A = B
    B = C

    escreva("Valores trocados A = ")
    escreva(A)
    escreva("B = ")
    escreva(B)

Fim Algoritmo
*/

#include <stdio.h>

int main(void)
{
    float A, B, C;
    printf("Digite um valor para A: ");
    scanf("%f", &A);
    printf("Digite um valor para B: ");
    scanf("%f", &B);
    C = A;
    A = B;
    B = C;

    printf("Valores trocados A = %f \n", A);
    printf("B = %f \n", B);
   

    return 0;
}