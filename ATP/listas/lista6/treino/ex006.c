#include <stdio.h>
#include <string.h>

int main(){
    system("clear");
    char nome[20];
    printf("digite seu nome: ");
    scanf("%s", nome);
    for (int i; i < strlen(nome); i++)
    {
        printf("%c\n", nome[i]);
    }
}