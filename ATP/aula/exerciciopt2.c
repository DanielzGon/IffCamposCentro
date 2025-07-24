#include <stdio.h>
int main(){
    int numero1, numero2, menorNumero,metadeDoMenor, i;
    printf("Digite o primeiro valor: ");
    scanf("%d", &numero1);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &numero2);
    if (numero1 > numero2)
    {
        menorNumero = numero2;
    }
    else{
        menorNumero = numero1;
    }
    printf("\nO menor numero foi: %d", menorNumero);
    metadeDoMenor = menorNumero / 2;
    printf("\nImprimindo todos os numeros entre 2 e %d (metade de %d)", metadeDoMenor, menorNumero);
    for (i = 2; i <= metadeDoMenor ; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}