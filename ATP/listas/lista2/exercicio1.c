#include <stdio.h>
int main(void) {
    float valor;
    printf("Digite um valor: ");
    scanf("%f", &valor);
    if (valor < 0) {
     printf("Valor negativo\n");
     }
        else{
            if (valor == 0) {
                printf("Valor nulo\n");
            } 
            else {
                printf("Valor positivo\n");
            }
        }
    return 0;
}