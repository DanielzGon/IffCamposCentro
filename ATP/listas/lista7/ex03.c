#include <stdio.h>
int main (){
    int i, maiorNumero = -9999999;
    int numeros [50];
    for(i = 0; i < 50; i++)
    {
     printf ("Digite um número: ");
     scanf("%d", &numeros[i]);
      if (numeros[i] > maiorNumero)
        {
            maiorNumero = numeros[i];
        }
    }
    for(i = 0; i < 50; i++)
    {
        if (numeros[i] == maiorNumero)
        {
            printf("\nPosição, %d", i);
        }
        
    }
    return 0;
}