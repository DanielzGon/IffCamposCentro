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
        int restoMenor = menorNumero % i;
        int restoMaior = maiorNumero % i;
        printf(" O resto da divisao de %d por %d e: %d\n", menorNumero, i, restoMenor);
        printf(" O resto da divisao de %d por %d e: %d\n", maiorNumero, i, restoMaior);
        if (restoMenor == 0 && restoMaior == 0){
         printf("Encontramos, o numero %d e um divisor comum de %d e %d.\n", i, menorNumero, maiorNumero);
         int primo = 1;
        }
    }
    return 0;
}