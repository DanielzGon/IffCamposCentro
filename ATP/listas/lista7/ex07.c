#include <stdio.h>
#include <string.h>

int main()
{
    const int NUM_PESSOAS = 200;
    const int TAM_NOME = 50;
    const int TAM_SEXO = 15;
    char nomes[NUM_PESSOAS][TAM_NOME];
    char sexos[NUM_PESSOAS][TAM_SEXO];
    int i;
    printf("--- Leitura de Dados de %d Pessoas ---\n", NUM_PESSOAS);
    for (i = 0; i < NUM_PESSOAS; i++)
    {
        printf("\n--- Pessoa %d ---\n", i + 1);
        printf("Digite o nome: ");
        scanf("%s", nomes[i]);
        printf("Digite o sexo (Masculino/Feminino): ");
        scanf("%s", sexos[i]);
    }
    printf("\n\n--- RELATÓRIO FINAL ---\n");
    printf("\n--- Mulheres ---\n");
    for (i = 0; i < NUM_PESSOAS; i++)
    {
        if (strcmp(sexos[i], "Feminino") == 0 || strcmp(sexos[i], "feminino") == 0 || strcmp(sexos[i], "F") == 0 || strcmp(sexos[i], "f") == 0)
        {
            printf("%s\n", nomes[i]);
        }
    }

    printf("\n--- Homens ---\n");
    for (i = 0; i < NUM_PESSOAS; i++)
    {
        if (strcmp(sexos[i], "Masculino") == 0 || strcmp(sexos[i], "masculino") == 0 || strcmp(sexos[i], "M") == 0 || strcmp(sexos[i], "m") == 0)
        {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}