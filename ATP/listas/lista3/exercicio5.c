#include <stdio.h>
int main()
{
    int IMCIdeal;
    float altura, peso, pesoIdeal;
    char sexo;
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite o sexo: ");
    scanf(" %c", &sexo);
    if (sexo == 'M' || sexo == 'm') 
    {
        pesoIdeal = (72.7 * altura) - 58;
    }
        else
        {
            if(sexo == 'F' || sexo == 'f')
            {
                pesoIdeal = ((62.1 * altura) - 44.7);
            }
            else
                {
                printf("Sexo inválido");
                return 1;
                }
            
        }
    printf("\nSeu peso ideal seria aproximadamente: %.2f Kg\n", pesoIdeal);
        if (peso >= (pesoIdeal - 1) && peso <= (pesoIdeal + 1)) 
        {
        printf("Você está dentro da sua faixa de peso ideal.\n");
        }
            else
            {
                if (peso > pesoIdeal)
                {
                     printf("Você está acima da sua faixa de peso ideal.\n");
                }
                else
                {
                    printf("Você está abaixo da sua faixa de peso ideal.\n");
                }
            }
    return 0;
}