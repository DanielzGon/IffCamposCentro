#include <stdio.h>
int main() {
    float valor1, valor2;
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);
    if (valor1 > valor2) {
        printf("O maior valor foi: %.2f\n", valor1);
    } 
    else {
        if (valor2 > valor1) {
            printf("O maior valor foi: %.2f\n", valor2);
        } 
        else {
            printf("Os valores são iguais: %.2f\n", valor1);
        }
    }
    return 0;
}