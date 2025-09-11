#include <stdio.h>
int main (){
    int i;
    double acumulador = 0, media;
    double numeros [200];
    for(i = 0; i < 200; i++)
    {
       printf ("Digite um número: ");
     scanf("%lf", numeros[i]);
        acumulador = acumulador+numeros[i];
    }
    media = acumulador/200.0;
    printf("\nA média dos números foi %f", media);
    for (i = 0; i < 200; i++)
    {
        if (numeros[i] > media)
        {
            printf("\nO número na posição %d é maior que a média  e tem um valor de %f", i, numeros[i]);
        }
    }
    return 0;
}