#include <stdio.h>
int Primo(int numero)
{
    int i;

    if (numero <= 1)
    {
        return 0;
    }

    for (i = 2; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
int main()
{
    int valor;
    int resultado;
    printf("--- Verificador de Números Primos ---\n");
    printf("Digite um número inteiro: ");
    scanf("%d", &valor);
    resultado = Primo(valor);

    if (resultado == 1)
    {
        printf("\nResultado: O número %d é primo.\n", valor);
    }
    else
    {
        printf("\nResultado: O número %d não é primo.\n", valor);
    }

    return 0;
}

