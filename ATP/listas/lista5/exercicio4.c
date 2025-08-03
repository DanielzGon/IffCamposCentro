#include <stdio.h>
int main()
{
    int n = 0, acumulaPar = 0, acumulaImpar = 0, qntPar = 0, qntImpar = 0;
    int maiorPar = -999999, menorImpar = 999999;
    double mediaPar = 0, mediaImpar = 0;
    do
    {
        printf("Digite numeros inteiros positivos (0 para sair): ");
        scanf("%d", &n);
        if (n % 2 == 0 && n > 0)
        {
            acumulaPar += n;
            if (n > maiorPar)
            {
                maiorPar = n;
            }
            qntPar++;
        }
        else
        {
            if (n % 2 != 0 && n > 0)
            {
                acumulaImpar += n;
                if (n < menorImpar)
                {
                    menorImpar = n;
                }
                qntImpar++;
            }
        }
    } while (n > 0);
    if (qntPar != 0)
    {
        mediaPar = (double)acumulaPar / qntPar;
        printf("A media dos numeros pares e: %.2f\n", mediaPar);
        printf("O maior numero par e: %d\n", maiorPar);
    }
    else
    {
        printf("Nenhum numero par foi digitado.\n");
    }
    if (qntImpar != 0)
    {
        mediaImpar = (double)acumulaImpar / qntImpar;
        printf("A media dos numeros impares e: %.2f\n", mediaImpar);
        printf("O menor numero impar e: %d\n", menorImpar);
    }
    else
    {
        printf("Nenhum numero impar foi digitado.\n");
    }
    return 0;
}