#include <stdio.h>
int main(void) {
    float pesoTerra, pesoOutroPlaneta;
    int planeta;
    printf("Digite o peso da Terra: (em kg) ");
    scanf("%f", &pesoTerra);
    printf("\nEscolha o planeta para calcular seu peso:\n");
    printf("1 - Mercúrio\n");
    printf("2 - Vênus\n");
    printf("3 - Marte\n");
    printf("4 - Júpiter\n");
    printf("5 - Saturno\n");
    printf("6 - Urano\n");
    printf("Digite o número do planeta: ");
    scanf("%d", &planeta); 
    switch (planeta)
    {
    case 1:
        pesoOutroPlaneta = pesoTerra * 0.37;
        printf("O peso relativo de %.3f KG na terra é de %.3f KG em Mercúrio", pesoTerra, pesoOutroPlaneta);
       break;
    case 2:
        pesoOutroPlaneta = pesoTerra * 0.88;
        printf("O peso relativo de %.3f KG na terra é de %.3f KG em Vênus", pesoTerra, pesoOutroPlaneta);
       break;
    case 3:
        pesoOutroPlaneta = pesoTerra * 0.38;
        printf("O peso relativo de %.3f KG na terra é de %.3f KG em Marte", pesoTerra, pesoOutroPlaneta);
       break;
    case 4:
        pesoOutroPlaneta = pesoTerra * 2.64;
        printf("O peso relativo de %.3f KG na terra é de %.3f KG em Júpiter", pesoTerra, pesoOutroPlaneta);       
       break;
    case 5:
        pesoOutroPlaneta = pesoTerra * 1.15;
        printf("O peso relativo de %.3f KG na terra é de %.3f KG em Saturno", pesoTerra, pesoOutroPlaneta);
       break;
    case 6:
        pesoOutroPlaneta = pesoTerra * 1.17;
        printf("O peso relativo de %.3f KG na terra é de %.3f KG em Urano", pesoTerra, pesoOutroPlaneta);
       break;
    
    default:
        printf("O planeta digitado é inválido");
        return 1;
        break;
    }
    return 0;
}