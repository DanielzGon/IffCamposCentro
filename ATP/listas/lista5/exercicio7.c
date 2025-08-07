#include <stdio.h>
int main()
{
    int i = 1, n, menorValor = 999999, maiorValor = -99999999;
    printf("Você digitará 40 números para encontrar o menor e o maior: \n");
    do
    {
        printf("Digite um número: ");
        scanf("%d", &n);
        if (n < menorValor)
        {
            menorValor = n;
        }
        if (n > maiorValor)
        {
            maiorValor = n;
        }
        i++;
    } while (i <= 40);
    printf("O menor valor foi %d\n", menorValor);
    printf("O maior valor foi %d\n", maiorValor);
    return 0;
}