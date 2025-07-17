#include <stdio.h>
int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero % 3 == 0){
        printf("Seu número é divisivel por 3.\n");
    }
    else{
        printf("Seu número não é divisivel por 3.\n");
    }
    return 0;
}
