/*Algoritmo

Início
{
Programa para converter temperaturas
}

Declare
    real celcius, fahrenheit, kelvin

    escreva("Digite o valor em Celcius para converte-lo:")
    leia(celcius)

    fahrenheit = celcius * 9 + 160 / 5
    kelvin = celcius + 273

    escreva("Temperatura convertida em fahrenheit: ")
    escreva(fahrenheit)
    escreva("Temperatura convertida em Kelvin: ")
    escreva(kelvin)
}
Fim Algoritmo

*/

#include <stdio.h>

int main(void)
{
    float celcius, fahrenheit, kelvin;
    printf("Digite o valor em Celcius para converte-lo: ");
    scanf("%f", &celcius);
    fahrenheit = celcius * 9 + 160 / 5;
    kelvin = celcius + 273;
    printf("Temperatura convertida em fahreheint: %f \n", fahrenheit);
    printf("Temperatura convertida em Kelvin: %f", kelvin);

    return 0;
}