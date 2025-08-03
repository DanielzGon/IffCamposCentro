#include <stdio.h>
int main(){
    int numero;
    do{
        printf("Digite infinitos numeros positivos e digite um numero negativo para sair: ");
        scanf("%d", &numero);
    }while (numero >= 0);
    return 0;
}