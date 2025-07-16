#include <stdio.h>
int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    numero = numero%2;
    if (numero == 0) {
        printf("O numero foi par.\n");
    } else {
        printf("O numero foi impar.\n");
    }
    return 0;
}