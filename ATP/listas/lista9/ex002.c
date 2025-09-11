#include <stdio.h>
#include <string.h>
struct Pessoa {
    char nome[50];
    char sexo[15];
};
int main()
{
    const int NUM_PESSOAS = 200;
    struct Pessoa turma[NUM_PESSOAS];
    int i;
    printf("--- Leitura de Dados de %d Pessoas ---\n", NUM_PESSOAS);
    for (i = 0; i < NUM_PESSOAS; i++)
    {
        printf("\n--- Pessoa %d ---\n", i + 1);
        printf("Digite o nome: ");
        scanf("%s", turma[i].nome);
        
        printf("Digite o sexo (Masculino/Feminino): ");
        scanf("%s", turma[i].sexo);
    }
    printf("\n\n--- RELATÓRIO FINAL ---\n");
    printf("\n--- Mulheres ---\n");
    for (i = 0; i < NUM_PESSOAS; i++)
    {
        if (strcmp(turma[i].sexo, "Feminino") == 0 || strcmp(turma[i].sexo, "feminino") == 0 || strcmp(turma[i].sexo, "F") == 0 || strcmp(turma[i].sexo, "f") == 0)
        {
            printf("%s\n", turma[i].nome);
        }
    }
    printf("\n--- Homens ---\n");
    for (i = 0; i < NUM_PESSOAS; i++)
    {
        if (strcmp(turma[i].sexo, "Masculino") == 0 || strcmp(turma[i].sexo, "masculino") == 0 || strcmp(turma[i].sexo, "M") == 0 || strcmp(turma[i].sexo, "m") == 0)
        {
            printf("%s\n", turma[i].nome);
        }
    }
    return 0;
}