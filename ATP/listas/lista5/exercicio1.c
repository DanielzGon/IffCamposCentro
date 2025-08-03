#include <stdio.h>
int main(){
    int i = 1, numero;
    int contadorPositivos = 0;
    int quantNegativos = 0;
    printf("Digite 20 numeros inteiros:\n");
    do{
    printf("Digite um valor: ");
    scanf("%d", &numero);
    if (numero >= 0)
    {
        contadorPositivos = contadorPositivos + numero;
    }
    else{
        quantNegativos++;
    }
    i++;
    }
    while (i <= 20);   
    printf("A soma de todos os valores positivos foi: %d", contadorPositivos);
    printf("\nA quantidade de numeros negativos foi: %d", quantNegativos);
    return 0;
}