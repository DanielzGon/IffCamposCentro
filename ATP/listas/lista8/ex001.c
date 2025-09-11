#include <stdio.h>
int main()
{
    const int LINHAS = 5;
    const int COLUNAS = 3;
    int matrizA[LINHAS][COLUNAS];
    int matrizB[LINHAS][COLUNAS];
    int matrizC[LINHAS][COLUNAS];
    int i, j;

    printf("Leitura da Matriz A\n");
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("Digite o valor para A[%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("\n--- Leitura da Matriz B ---\n");
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("Digite o valor para B[%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("\n--- Matriz C (Soma de A + B) ---\n");
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            printf("%d\t", matrizC[i][j]);
        }
        printf("\n");
    }
    return 0;
}