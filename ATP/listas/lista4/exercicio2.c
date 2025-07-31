#include <stdio.h>
int main()
{
    int numero;
    float media, soma = 0;
    int i = 1;
    while (i <= 100)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma = soma + numero;
        i++;
    }
    media = soma / 100;
    printf("A media dos numeros digitados e: %.2f\n", media);
    return 0;
}