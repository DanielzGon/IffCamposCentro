#include <stdio.h>
int main()
{
    int n, contador = 0;
    printf("Digite um valor: ");
    scanf("%d", &n);
    while (n >= 0)
    {
        printf("Digite outro valor positivo ou digite um valor menor que 0 para sair: ");
        scanf("%d", &n);
        contador++;
    }
    printf("Você digitou %d valores\n", contador);
}