#include <stdio.h>
long long int calcularFatorial(int n)
{
    if (n < 0)
    {
        return -1;
    }

    long long int fatorial = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        fatorial = fatorial * i;
    }

    return fatorial;
}
int main()
{
    int numero;
    long long int resultado;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    resultado = calcularFatorial(numero);
    if (resultado == -1)
    {
        printf("\nErro: Fatorial não é definido para números negativos.\n");
    }
    else
    {
        printf("\nO fatorial de %d é: %lld\n", numero, resultado);
    }
    return 0;
}

