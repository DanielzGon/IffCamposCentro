#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    int contadorHomens = 0;
    int contadorMulheres = 0;
    char nome[50];
    char sexo[10];
    for (i = 1; i <= 10; i++)
    {
        printf("\nPessoa %d \n", i);
        printf("Digite o nome: ");
        scanf("%s", nome);
        printf("Digite o sexo (M/F): ");
        scanf("%s", sexo);
        if (strcmp(sexo, "M") == 0 || strcmp(sexo, "m") == 0)
        {
            contadorHomens++;
        }
        else
        {
            if (strcmp(sexo, "F") == 0 || strcmp(sexo, "f") == 0)
            {
                contadorMulheres++;
            }
        }
    }
    printf("\nRelatório Final\n");
    printf("Total de homens: %d\n", contadorHomens);
    printf("Total de mulheres: %d\n", contadorMulheres);
    return 0;
}