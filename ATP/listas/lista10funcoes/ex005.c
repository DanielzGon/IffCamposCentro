#include <stdio.h>
int Divisivel(int x, int y)
{
    if (y == 0)
    {
        return 0;
    }
    if (x % y == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num1, num2;
    int resultado;
    printf("Digite o primeiro número (dividendo): ");
    scanf("%d", &num1);
    printf("Digite o segundo número (divisor): ");
    scanf("%d", &num2);
    resultado = Divisivel(num1, num2);
    if (resultado == 1)
    {
        printf("\nResultado: %d é divisível por %d.\n", num1, num2);
    }
    else
    {
        printf("\nResultado: %d não é divisível por %d.\n", num1, num2);
    }
    return 0;
}