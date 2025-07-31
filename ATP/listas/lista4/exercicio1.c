#include <stdio.h>
int main()
{
    int i, numero;
    float media, soma = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma = soma + numero;
    }
    media = soma / 10;
    printf("A media dos numeros digitados e: %.2f\n", media);
    return 0;
}