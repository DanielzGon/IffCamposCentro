#include <stdio.h>
int main()
{
    int i;
    float soma = 0;
    for (i = 1; i <= 1000; i++)
    {
       soma = soma + i;
    }
    printf("%f", soma);
    return 0;
}