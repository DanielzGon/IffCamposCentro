#include <stdio.h>

int main(void)
{
    float imc, peso, altura;

    printf("Para calcular seu IMC, informe os seguintes dados:\n ");

    printf("Seu peso: ");
    scanf("%f", &peso);

     printf("Sua altura: ");
    scanf("%f", &altura);

    imc = peso/(altura*altura);
    printf("Seu IMC é: %f\n", imc);

    return 0;
}