#include <stdio.h>
int main(){
    float crescimentoA, crescimentoB;
    int anos = 0;
    double paisA = 5000000;
    double paisB = 7000000;
    while (paisA <= paisB) {
        crescimentoA = paisA *0.03;
        crescimentoB = paisB *0.02;
        paisA += crescimentoA + paisA;
        paisB += crescimentoB + paisB;
        anos++;
        }
    printf("A quantidade de tempo necessario para que a populacao do pais A ultrapasse a do pais B e: %d anos\n", anos);
    return 0;
}