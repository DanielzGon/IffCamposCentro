#include <stdio.h>
int main()
{
    const int PROFUNDIDADE = 2;
    const int LINHAS = 5;
    const int COLUNAS = 4;
    int matriz3D[PROFUNDIDADE][LINHAS][COLUNAS];
    int i, j, k;
    printf("--- Leitura da Matriz 3D (5x4x2) ---\n");
    for (i = 0; i < PROFUNDIDADE; i++)
    {
        printf("\n-- Preenchendo a camada de profundidade %d --\n", i);
        for (j = 0; j < LINHAS; j++)
        {
            for (k = 0; k < COLUNAS; k++)
            {
                printf("Digite o valor para a posição [%d][%d][%d]: ", i, j, k);
                scanf("%d", &matriz3D[i][j][k]);
            }
        }
    }
    printf("\n\n--- IMPRESSÃO DA MATRIZ ---\n");
    printf("\n--- Matriz na Profundidade 0 ---\n");
    for (j = 0; j < LINHAS; j++)
    {
        for (k = 0; k < COLUNAS; k++)
        {
            printf("%d\t", matriz3D[0][j][k]);
        }
        printf("\n");
    }

    printf("\n--- Matriz na Profundidade 1 ---\n");
    for (j = 0; j < LINHAS; j++)
    {
        for (k = 0; k < COLUNAS; k++)
        {
            printf("%d\t", matriz3D[1][j][k]);
        }
        printf("\n");
    }
    return 0;
}