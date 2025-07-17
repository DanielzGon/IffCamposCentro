#include <stdio.h>
int main() {
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    if (idade >= 5 && idade <= 7) {
        printf("Categoria: Infantil A\n");
    } else {
        if (idade <= 10) {
            printf("Categoria: Infantil B\n");
        } else {
            if (idade <= 13) {
                printf("Categoria: Juvenil A\n");
            } else {
                if (idade <= 17) {
                    printf("Categoria: Juvenil B\n");
                } else {
                    printf("Idade fora das categorias validas (5-17 anos).\n");
                }
            }
        }
    }
    return 0;
}