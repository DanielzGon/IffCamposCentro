#include <stdio.h>

int main(void)
{
    float valor1, valor2, valor3, mediaPonderada;

    float peso1 = 1;
    float peso2 = 2;
    float peso3 = 3;
    float somaPesos = 1 + 2 + 3;

     printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

     printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    printf("Digite o terceiro valor: ");
    scanf("%f", &valor3);

    mediaPonderada = (valor1 * peso1 + valor2 * peso2 + valor3 * peso3) / somaPesos;

    printf("A media ponderada é: %f\n", mediaPonderada);

    return 0;
}