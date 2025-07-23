#include <stdio.h>

int main(void)
{
    int inteiro, sucessor, antecessor;
    printf("Digite um número inteiro para descobrir seu antecessor e sucessor: ");
    scanf("%d", & inteiro);
    antecessor = inteiro - 1;
    sucessor = inteiro + 1;
    printf("Antecessor do seu número: %d \n", antecessor);
    printf("Sucessor do seu número: %d", sucessor);

    return 0;
}