#include <stdio.h>
int main(){
    int i, produto1, produto2, resultado;
    printf("Digite o primeiro produto: ");
    scanf("%d", &produto1);
    printf("Digite o segundo produto: ");
    scanf("%d", &produto2);
    int soma = 0;
    for (i = 1; i <= produto2; i++){
        soma = soma + produto1;
    }
    printf("O resultado da multiplicação é: %d\n", soma);
    return 0;
}