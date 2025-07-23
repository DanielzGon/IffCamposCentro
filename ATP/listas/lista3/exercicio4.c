#include <stdio.h>
int main(){
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);
    if (ano % 4 == 0 && ano % 100 != 0 || ano % 4 == 0 && ano % 400 == 0)
    {
        printf("O ano de %d é bissexto", ano);
    }
    else
    {
        printf("O ano de %d não é bissexto", ano);
    }
    return 0;
}