#include <stdio.h>
int main()
{
    int i, primeiroValor, segundoValor;
    int somarPares = 0;
    printf("Digite o primeiro valor para o intervalo: ");
    scanf("%d", &primeiroValor);
    printf("Digite o segundo valor: ");
    scanf("%d", &segundoValor);
    printf("Números pares no intervalo aberto de %d até %d são: \n", primeiroValor, segundoValor);
    for (i = primeiroValor; i <= segundoValor; i++)
    {
       if (i % 2 == 0)
       {
           printf("%d\n", i);
           somarPares = somarPares + i;
       }
    }
    printf("A soma dos números pares é: %d\n", somarPares);
    return 0;
}