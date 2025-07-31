#include <stdio.h>
int main()
{
    int n, i;
    printf("Digite um valor: ");
    scanf("%d", &n);
    printf("Os números multiplos de 7 entre 1 e %d são: \n", n);
    for (i = 1; i <= n; i++)
    {
     if(i %7 == 0)
     {
        printf("%d\n", i);
     }
    }
    return 0;
}