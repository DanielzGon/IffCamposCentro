#include <stdio.h>
#include <string.h>

int main()
{
    char string1[100];
    char string2[100];
    printf("Digite a primeira string: ");
    scanf("%s", string1);
    printf("Digite a segunda string: ");
    scanf("%s", string2);
    printf("Conteúdo da String 1: \"%s\"\n", string1);
    printf("Comprimento da String 1: %d caracteres\n", (int)strlen(string1));
    printf("\nConteúdo da String 2: \"%s\"\n", string2);
    printf("Comprimento da String 2: %d caracteres\n", (int)strlen(string2));
    if (strlen(string1) == strlen(string2))
    {
        printf("As duas strings possuem o mesmo comprimento.\n");
    }
    else
    {
        printf("As duas strings possuem comprimentos diferentes.\n");
    }
    if (strcmp(string1, string2) == 0)
    {
        printf("O conteúdo das duas strings é igual.\n");
    }
    else
    {
        printf("O conteúdo das duas strings é diferente.\n");
    }
    return 0;
}