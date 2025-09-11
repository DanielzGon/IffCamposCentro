#include <stdio.h>

int main()
{
    const int NUM_PESSOAS = 30;
    const int TAM_NOME = 50;
    char nomes[NUM_PESSOAS][TAM_NOME];
    int idades[NUM_PESSOAS];
    int i;
    long int somaIdades = 0;
    double mediaIdades;
    printf("--- Leitura de Dados de %d Pessoas ---\n", NUM_PESSOAS);
    for (i = 0; i < NUM_PESSOAS; i++)
    {
        printf("\n--- Pessoa %d ---\n", i + 1);
        printf("Digite o nome: ");
        scanf("%s", nomes[i]);
        printf("Digite a idade: ");
        scanf("%d", &idades[i]);
        somaIdades = somaIdades + idades[i];
    }
    mediaIdades = (double)somaIdades / NUM_PESSOAS;
    printf("\n\n--- Relatório Final ---\n");
    printf("A média de idade da turma é: %.2f anos.\n", mediaIdades);
    printf("Pessoas com idade acima da média:\n");
    for (i = 0; i < NUM_PESSOAS; i++)
    {
        if (idades[i] > mediaIdades)
        {
            printf("- %s\n", nomes[i]);
        }
    }
    return 0;
}