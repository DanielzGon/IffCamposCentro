#include <stdio.h>
int main()
{
    int i, n;
    int primo = 1;
    printf("Descobriremos se seu número é primo: \n");
    printf("Digite um número: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        primo = 0;
    }
        else
        {
            for (i = 2; i <= n / 2; i++)
            {
                if (n % i == 0)
                {
                    primo = 0;
                    break;
                }
            }
        }

    if (primo == 1)
    {
        printf("O número %d é primo\n", n);
    }
    else
    {
        printf("O número %d não é primo\n", n);
    }
    return 0;
}