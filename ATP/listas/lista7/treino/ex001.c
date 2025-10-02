#include <stdio.h>

int main()
{
    char nome[50];
    for (int i =0; i < 50; i++)
    {
        printf("Digite um nome: ");
        scanf("%c", &nome[i]);
    }
    for (int i = 50; i > 0; i--)
    {
        printf("%c", nome[i]);
    }

    return 0;
}