#include <stdio.h>
#include <string.h>

int ehPalindromo(char palavra[])
{
    int i, j;
    int tamanho = strlen(palavra);

    for (i = 0, j = tamanho - 1; i < j; i++, j--)
    {
        if (palavra[i] != palavra[j])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char palavraUsuario[100];
    int resultado;

    printf("--- Verificador de Palíndromos ---\n");
    printf("Digite uma palavra: ");
    scanf("%s", palavraUsuario);

    resultado = ehPalindromo(palavraUsuario);

    if (resultado == 1)
    {
        printf("\nA palavra \"%s\" é um palíndromo.\n", palavraUsuario);
    }
    else
    {
        printf("\nA palavra \"%s\" não é um palíndromo.\n", palavraUsuario);
    }

    return 0;
}

