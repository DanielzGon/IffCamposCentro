#include <stdio.h>
int main(){
    int numero1, numero2, i;
    printf("Digite o primeiro valor: ");
    scanf("%d", &numero1);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &numero2);
    if (numero1 > numero2)
    {
        printf("O menor numero foi: %d", numero2);
    }
    else{
        printf("O menor numero foi: %d", numero1);
    }
    return 0;
}