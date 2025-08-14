#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50];
    int i;
    int tamanho;

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("\nSeu nome na vertical:\n");

    tamanho = strlen(nome);

    for (i = 0; i < tamanho; i++)
    {
        printf("%c\n", nome[i]);
    }

    return 0;
}