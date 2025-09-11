#include <stdio.h>
int main()
{
    const int TAMANHO = 20;
    int vetorA[TAMANHO];
    int vetorB[TAMANHO];
    int i;
    int j;
    printf("--- Por favor, digite %d números ---\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++)
    {
        printf("Digite o número para a posição A[%d]: ", i);
        scanf("%d", &vetorA[i]);
    }
    for (i = 0, j = TAMANHO - 1; i < TAMANHO; i++, j--)
    {
        vetorB[j] = vetorA[i];
    }
    printf("\n--- Vetor A (Ordem Original) ---\n");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("%d ", vetorA[i]);
    }
    printf("\n\n--- Vetor B (Ordem Invertida) ---\n");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("%d ", vetorB[i]);
    }
    printf("\n");
    return 0;
}