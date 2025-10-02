#include <stdio.h>
char positivoOuNegativo(int numero){
    if (numero <= 0)
    {
        return 'N';
    }
    else
    {
        return 'P';
    }
}
int main(){
    int numero;
    char resultado;
    printf("Digite um numero: ");
    scanf("%d", &numero);   
    resultado = positivoOuNegativo(numero);
    printf ("O numero digitado é %c", resultado);
    return 0;
}
