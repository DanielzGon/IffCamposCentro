#include <stdio.h>
int main() {
    float numero, antecessor, sucessor;
    printf("Digite um numero: ");
    scanf("%f", &numero);
    if(numero > 0 && numero < 100){
        printf("Seu número está no intervalo aberto entre 0 e 100.\n");
    }
    else{
        printf("Seu número não está no intervalo aberto entre 0 e 100.\n");
    }
    return 0;
}
