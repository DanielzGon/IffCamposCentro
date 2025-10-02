#include <stdio.h>

int soma(int N1, int N2, int N3){
    int resultado;
    resultado = N1 + N2 + N3;
    return (resultado);
}
int main(){
    int V1, V2,V3, Resultado;
    printf("Digite o primeiro valor: ");
    scanf("%d", &V1);
    printf("Digite o segundo valor: ");
    scanf("%d", &V2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &V3);
    Resultado = soma(V1, V2, V3);
    printf("O resultado da soma é: %d", Resultado);
    return 0;
}