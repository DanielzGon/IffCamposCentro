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
    if (planeta == 1) {
        pesoOutroPlaneta = pesoTerra * 0.37;
        printf("Seu peso em Mercúrio é: %.2f kg\n", pesoOutroPlaneta);
    } else {
        if (planeta == 2) {
            pesoOutroPlaneta = pesoTerra * 0.88;
            printf("Seu peso em Vênus é: %.2f kg\n", pesoOutroPlaneta);
        } else {
            if (planeta == 3) {
                pesoOutroPlaneta = pesoTerra * 0.38;
                printf("Seu peso em Marte é: %.2f kg\n", pesoOutroPlaneta);
            } else {
                if (planeta == 4) {
                    pesoOutroPlaneta = pesoTerra * 2.64;
                    printf("Seu peso em Júpiter é: %.2f kg\n", pesoOutroPlaneta);
                } else {
                    if (planeta == 5) {
                        pesoOutroPlaneta = pesoTerra * 1.15;
                        printf("Seu peso em Saturno é: %.2f kg\n", pesoOutroPlaneta);
                    } else {
                        if (planeta == 6) {
                            pesoOutroPlaneta = pesoTerra * 1.17;
                            printf("Seu peso em Urano é: %.2f kg\n", pesoOutroPlaneta);
                        } else {
                            printf("Planeta invalido\n");
                        }
                    }
                }
            }
        }
    }
    return 0;
}