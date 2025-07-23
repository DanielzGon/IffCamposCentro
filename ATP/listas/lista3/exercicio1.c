#include <stdio.h>
int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if (numero % 2 == 0)
    {
        printf("O número escolhido foi par");
    }
        else
        {
            printf("O número escolhido foi impar");
        }
    return 0;
}