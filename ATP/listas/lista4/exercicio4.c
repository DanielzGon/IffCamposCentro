#include <stdio.h>
int main()
{
    int i, n;
    printf("Digite um numero para somar todos seus antecessores: ");
    scanf("%d", &n);
    float soma = 0;
    for (i = 0; i <= n; i++)
    {
       soma = i + n;
    }
    printf("%2.f", soma);
    return 0;
}