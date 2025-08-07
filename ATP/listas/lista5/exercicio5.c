#include <stdio.h>
int main()
{
    int i, n;
    long long int fatorial = 1;
    printf("Descobriremos o fatorial do seu número: \n");
    printf("Digite um número: ");
    scanf("%d", &n);
    if (n >= 0)
    {
        for (i = 1; i <= n; i++)
        {
            fatorial = fatorial * i;
        }
        printf("O fatorial de %d é %lld\n", n, fatorial);
    }
    else
    {
        printf("Erro: Fatorial não existe para números negativos.\n");
    }
    return 0;
}