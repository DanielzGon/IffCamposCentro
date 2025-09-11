#include <stdio.h>
int main()
{
    const int ELEMENTOS = 7;
    int vetorA[ELEMENTOS];
    int vetorB[ELEMENTOS];
    int matrizC[ELEMENTOS][2];
    int i, j;
    printf("--- Leitura do Vetor A ---\n");
    for (i = 0; i < ELEMENTOS; i++)
    {
        printf("Digite o valor para A[%d]: ", i);
        scanf("%d", &vetorA[i]);
    }
    printf("\n--- Leitura do Vetor B ---\n");
    for (i = 0; i < ELEMENTOS; i++)
    {
        printf("Digite o valor para B[%d]: ", i);
        scanf("%d", &vetorB[i]);
    }
    for (i = 0; i < ELEMENTOS; i++)
    {
        matrizC[i][0] = vetorA[i];
        matrizC[i][1] = vetorB[i];
    }
    printf("\n--- Matriz C (Coluna 1 = Vetor A, Coluna 2 = Vetor B) ---\n");
    for (i = 0; i < ELEMENTOS; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", matrizC[i][j]);
        }
        printf("\n");
    }
    return 0;
}