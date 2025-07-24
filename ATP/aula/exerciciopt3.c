#include <stdio.h>
int main(){
    int numero1, numero2, menorNumero, metadeDoMenor,maiorNumero, i;
    printf("Digite o primeiro valor: ");
    scanf("%d", &numero1);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &numero2);
    if (numero1 > numero2)
    {
        menorNumero = numero2;
        maiorNumero = numero1;
    }
    else{
        menorNumero = numero1;
        maiorNumero = numero2;
    }
    metadeDoMenor = menorNumero / 2;
    for (i = 2; i <= metadeDoMenor ; i++)
    {
        int resto = metadeDoMenor % i;
        printf(" O resto da divisao de %d por %d e: %d\n", menorNumero, i, resto);
        printf(" O resto da divisao de %d por %d e: %d\n", maiorNumero, i, resto);
    }
    return 0;
}