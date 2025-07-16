#include <stdio.h>
int main(void) {
    float valorBruto, prestacao;
    printf("Digite o valor do salário bruto: ");
    scanf("%f", &valorBruto);
    printf("Digite o valor da prestação desejada: \n");
    scanf("%f", &prestacao);
    float limite30Porcento = valorBruto * (30.0 / 100.0);

    if (prestacao <= limite30Porcento) {
        printf("Seu empréstimo foi aprovado.\n");
    } else {
        printf("Seu empréstimo NÃO foi aprovado.\n");
    }

    return 0;
}