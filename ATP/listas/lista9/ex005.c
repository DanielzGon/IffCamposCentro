#include <stdio.h>
#include <string.h>
struct Atleta {
    char nome[50];
    float altura;
};
int main()
{
    const int DELEGACOES = 5;
    const int ATLETAS_POR_DELEGACAO = 10;
    struct Atleta jogos[DELEGACOES][ATLETAS_POR_DELEGACAO];
    int i, j;

    float maiorAltura;
    char nomeMaisAlto[50];
    for (i = 0; i < DELEGACOES; i++)
    {
        printf("\n--- Leitura da Delegação %d ---\n", i + 1);
        for (j = 0; j < ATLETAS_POR_DELEGACAO; j++)
        {
            printf("Digite o nome do atleta %d: ", j + 1);
            scanf("%s", jogos[i][j].nome);
            printf("Digite a altura de %s (em metros): ", jogos[i][j].nome);
            scanf("%f", &jogos[i][j].altura);
        }
    }
    printf("\n\n--- RELATÓRIO: Atletas Mais Altos por Delegação ---\n");

    for (i = 0; i < DELEGACOES; i++)
    {
        maiorAltura = 0.0;

        for (j = 0; j < ATLETAS_POR_DELEGACAO; j++)
        {
            if (jogos[i][j].altura > maiorAltura)
            {
                maiorAltura = jogos[i][j].altura;
                strcpy(nomeMaisAlto, jogos[i][j].nome);
            }
        }
        printf("Delegação %d: Atleta mais alto é %s com %.2f m\n", i + 1, nomeMaisAlto, maiorAltura);
    }
    return 0;
}