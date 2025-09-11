#include <stdio.h>
#include <string.h>
int main()
{
    char palavra1[100];
    char palavra2[100];
    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);
    if (strlen(palavra1) < strlen(palavra2))
    {
        printf("A menor palavra (com menos letras) é: %s\n", palavra1);
    }
    else
    {
        if (strlen(palavra1) > strlen(palavra2))
        {
            printf("A menor palavra (com menos letras) é: %s\n", palavra2);
        }
        else
        {
            printf("As duas palavras têm o mesmo tamanho.\n");
        }
    }
    return 0;
}