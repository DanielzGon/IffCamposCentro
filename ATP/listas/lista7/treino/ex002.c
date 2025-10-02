#include <stdio.h>

int main()
{
    const int TAMANHO = 50;
    int numeros[TAMANHO];
    int i;
    int maiorNumero;

    printf("--- Por favor, digite %d números ---\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++)
    {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maiorNumero = numeros[0];
    for (i = 1; i < TAMANHO; i++)
    {
        if (numeros[i] > maiorNumero)
        {
            maiorNumero = numeros[i];
        }
    }
    
    printf("\n--- Análise dos Dados ---\n");
    printf("O maior número digitado foi: %d\n", maiorNumero);
    printf("Este número foi encontrado na(s) seguinte(s) posição(ões):\n");

    for (i = 0; i < TAMANHO; i++)
    {
        if (numeros[i] == maiorNumero)
        {
            printf("Posição [%d]\n", i);
        }
    }

    return 0;
}