#include <stdio.h>
int main() {
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    int infantilA = idade >= 5 && idade <= 7;
    int infantilB = idade >= 8 && idade <= 10;
    int juvenilA = idade >= 11 && idade <= 13;
    int juvenilB = idade >= 14 && idade <= 17;
    return 0;
}
