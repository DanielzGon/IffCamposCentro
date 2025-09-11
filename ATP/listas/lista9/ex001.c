#include <stdio.h>
#include <math.h>
struct Ponto {
    double x;
    double y;
};
int main()
{
    struct Ponto pontoA;
    struct Ponto pontoB;
    double distancia;
    printf("--- Calculadora de Distância entre Pontos ---\n");
    printf("\nDigite as coordenadas do Ponto A:\n");
    printf("Coordenada X: ");
    scanf("%lf", &pontoA.x);
    printf("Coordenada Y: ");
    scanf("%lf", &pontoA.y);
    printf("\nDigite as coordenadas do Ponto B:\n");
    printf("Coordenada X: ");
    scanf("%lf", &pontoB.x);
    printf("Coordenada Y: ");
    scanf("%lf", &pontoB.y);
    distancia = sqrt(pow(pontoB.x - pontoA.x, 2) + pow(pontoB.y - pontoA.y, 2));
    printf("\n\n");
    printf("A distância entre o Ponto A (%.2f, %.2f) e o Ponto B (%.2f, %.2f) é: %.2f\n", 
           pontoA.x, pontoA.y, pontoB.x, pontoB.y, distancia);
    return 0;
}