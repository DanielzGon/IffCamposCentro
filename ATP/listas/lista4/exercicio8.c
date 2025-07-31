#include <stdio.h>
int main()
{
    int i;
    int soma = 0;
    printf("Os números multiplos de 3 ou 5 entre 1000 são: \n");
    i = 1;
    while (i < 1000)
    {
     if(i % 3 == 0 || i % 5 == 0)
     {
        printf("%d\n", i);
        soma = soma + i;
     }
     i++;
    }
    printf("A soma destes multiplos é: %d\n", soma);
    return 0;
}