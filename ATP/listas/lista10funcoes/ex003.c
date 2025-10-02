#include <stdio.h>

int multiplicacao(int N1, int N2){
    int resultado;
    for (int i = 0; i <N2; i++){
        resultado += N1;
    }
    return (resultado);
}
int main(){
    int V1, V2, Resultado;
    printf("Digite o primeiro valor: ");
    scanf("%d", &V1);
    printf("Digite o segundo valor: ");
    scanf("%d", &V2);
    Resultado = multiplicacao(V1, V2);
    printf("O resultado da multiplicação é: %d", Resultado);
    return 0;
}