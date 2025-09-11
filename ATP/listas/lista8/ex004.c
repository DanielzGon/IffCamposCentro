#include <stdio.h>
int main()
{
    const int DELEGACOES = 5;
    const int ATLETAS = 10;
    float alturas[DELEGACOES][ATLETAS];
    int i, j;
    float maiorAlturaDelegacao;

    for (i = 0; i < DELEGACOES; i++)
    {
        printf("\n--- Leitura da Delegação %d ---\n", i + 1);
        for (j = 0; j < ATLETAS; j++)
        {
            printf("Digite a altura do atleta %d (em metros): ", j + 1);
            scanf("%f", &alturas[i][j]);
        }
    }
    printf("\n\n--- RELATÓRIO: Maiores Alturas por Delegação ---\n");

    for (i = 0; i < DELEGACOES; i++)
    {
        maiorAlturaDelegacao = alturas[i][0];
        
        for (j = 1; j < ATLETAS; j++)
        {
            if (alturas[i][j] > maiorAlturaDelegacao)
            {
                maiorAlturaDelegacao = alturas[i][j];
            }
        }
        printf("A maior altura da Delegação %d foi: %.2f m\n", i + 1, maiorAlturaDelegacao);
    }
    return 0;
}