#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    const int DIMENSAO = 4;
    char tabuleiro[DIMENSAO][DIMENSAO];
    int i, j;
    int y1_linha, y1_coluna, y2_linha, y2_coluna;
    int tentativas = 0;
    int acertos = 0;
    int chute_linha, chute_coluna;
    srand(time(NULL));
    for (i = 0; i < DIMENSAO; i++)
    {
        for (j = 0; j < DIMENSAO; j++)
        {
            tabuleiro[i][j] = 'x';
        }
    }
    y1_linha = rand() % DIMENSAO;
    y1_coluna = rand() % DIMENSAO;
    tabuleiro[y1_linha][y1_coluna] = 'y';
    do
    {
        y2_linha = rand() % DIMENSAO;
        y2_coluna = rand() % DIMENSAO;
    } while (y1_linha == y2_linha && y1_coluna == y2_coluna);
    tabuleiro[y2_linha][y2_coluna] = 'y';
    printf("--- JOGO: Encontre os dois 'y' no tabuleiro 4x4 ---\n");
    while (acertos < 2)
    {
        printf("\nDigite a linha para o seu chute (0 a 3): ");
        scanf("%d", &chute_linha);
        printf("Digite a coluna para o seu chute (0 a 3): ");
        scanf("%d", &chute_coluna);
        tentativas++;
        if (chute_linha < 0 || chute_linha >= DIMENSAO || chute_coluna < 0 || chute_coluna >= DIMENSAO)
        {
            printf("Coordenada inválida! Tente novamente.\n");
        }
        else
        {
            if (tabuleiro[chute_linha][chute_coluna] == 'y')
            {
                printf("ACERTOU! Você encontrou um 'y'.\n");
                tabuleiro[chute_linha][chute_coluna] = 'X';
                acertos++;
            }
            else
            {
                if (tabuleiro[chute_linha][chute_coluna] == 'X')
                {
                    printf("Você já encontrou este 'y'. Tente outra posição.\n");
                }
                else
                {
                     printf("Água! Tente novamente.\n");
                }
            }
        }
    }
    printf("\nParabéns! Você encontrou os dois 'y'!\n");
    printf("Número total de tentativas: %d\n", tentativas);
    return 0;
}