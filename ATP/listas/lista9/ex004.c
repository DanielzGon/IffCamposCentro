#include <stdio.h>
struct Pessoa {
    char nome[50];
    int idade;
};
int main()
{
    const int NUM_PESSOAS = 30;
    struct Pessoa turma[NUM_PESSOAS];
    int i;
    long int somaIdades = 0;
    double mediaIdades;
    printf("--- Leitura de Dados de %d Pessoas ---\n", NUM_PESSOAS);
    for (i = 0; i < NUM_PESSOAS; i++)
    {
        printf("\n--- Pessoa %d ---\n", i + 1);
        printf("Digite o nome: ");
        scanf("%s", turma[i].nome);
        
        printf("Digite a idade: ");
        scanf("%d", &turma[i].idade);

        somaIdades = somaIdades + turma[i].idade;
    }
    mediaIdades = (double)somaIdades / NUM_PESSOAS;
    printf("\n\n--- Relatório Final ---\n");
    printf("A média de idade da turma é: %.2f anos.\n", mediaIdades);
    printf("Pessoas com idade acima da média:\n");
    for (i = 0; i < NUM_PESSOAS; i++)
    {
        if (turma[i].idade > mediaIdades)
        {
            printf("- %s\n", turma[i].nome);
        }
    }
    return 0;
}