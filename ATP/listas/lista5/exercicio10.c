#include <stdio.h>
int main ()
{
    const float pi = 3.14;
    int operacao;
    float ladoQuadrado;
    float baseRetangulo, alturaRetangulo;
    float baseTriangulo, alturaTriangulo;
    float raioCirculo;
    float areaQuadrado, areaRetangulo, areaTriangulo, areaCirculo;
    do{
        printf("Escolha qual operação você deseja: \n");
        printf("Digite 1 - Calcular a área do quadrado\n");
        printf("2 - Calcular a área do retângulo\n");
        printf("3 - Calcular a área do triângulo\n");
        printf("4 - Calcular a área do cı́rculo\n");
        printf("5 - Sair do algoritmo\n");
        scanf("%d", &operacao);
        switch (operacao)
        {
        case 1:
            printf("Você escolheu área do quadrado, digite o valor de um lado");
            scanf("%f", &ladoQuadrado);
            areaQuadrado = ladoQuadrado * ladoQuadrado;
            printf("A área do quadrado é %.2f", areaQuadrado);
            break;
        case 2:
            printf("Você escolheu área do retângulo, digite o valor da base");
            scanf("%f", &baseRetangulo);
            printf("Digite o valor da altura");
            scanf("%f", &alturaRetangulo);
            areaRetangulo = baseRetangulo * alturaRetangulo;
            printf("A área do retângulo é %.2f", areaRetangulo);
            break;
            case 3:
            printf("Você escolheu área do triângulo, digite o valor da base");
            scanf("%f", &baseTriangulo);
            printf("Digite o valor da altura");
            scanf("%f", &alturaTriangulo);
            areaTriangulo = (baseTriangulo * alturaTriangulo) / 2;
            printf("A área do triângulo é %.2f", areaTriangulo);
            break;
            case 4:
            printf("Você escolheu área do circulo, digite o valor do raio");
            scanf("%f", &raioCirculo);
            areaCirculo = pi * raioCirculo * raioCirculo;
            printf("A área do circulo é %.2f", areaCirculo);
            break;
            case 5:
            printf("Obrigado por usar o programa");
            break;
        default:
        printf("Operação inválida");
            break;
        }
    }while (operacao != 5);
    return 0;
}