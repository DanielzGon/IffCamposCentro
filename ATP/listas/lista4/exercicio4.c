#include <stdio.h>
int main(){
    int n, i, soma = 0;
    printf("Digite um valor: ");
    scanf("%d", &n);
    for (i = 1; i <=n; i++)
    {
        soma = soma + i;
    }
     printf("A soma de todos os números de 1 até %d é: %d\n", n , soma);
    return 0;
}