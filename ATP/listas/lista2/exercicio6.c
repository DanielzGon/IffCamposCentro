#include <stdio.h>
int main() {
    int numero, antecessor, sucessor;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    antecessor = numero - 1;
    sucessor = numero + 1;
    printf("O antecessor do numero %d é: %d\n", numero, antecessor);
    printf("O sucessor do numero %d é: %d\n", numero, sucessor);
    return 0;
}
