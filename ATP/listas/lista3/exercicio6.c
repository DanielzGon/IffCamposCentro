#include <stdio.h>
int main(){
    int mes;
    printf("Digite um número de 1 a 12");
    scanf("%d", &mes);
    switch (mes)
    {
    case 1:
        printf("O mês escolhido (%d) é Janeiro.",mes);
        break;
    case 2:
        printf("O mês escolhido (%d) é Fevereiro.",mes);
        break;
    case 3:
        printf("O mês escolhido (%d) é Março.",mes);
        break;
    case 4:
        printf("O mês escolhido (%d) é Abril.",mes);
        break;
    case 5:
        printf("O mês escolhido (%d) é Maio.",mes);
        break;
    case 6:
        printf("O mês escolhido (%d) é Junho.",mes);
        break;
    case 7:
        printf("O mês escolhido (%d) é Julho.",mes);
        break;
    case 8:
        printf("O mês escolhido (%d) é Agosto.",mes);
        break;
    case 9:
        printf("O mês escolhido (%d) é Setembro.",mes);
        break;
    case 10:
        printf("O mês escolhido (%d) é Outubro.",mes);
        break;
    case 12:
        printf("O mês escolhido (%d) é Novembro.",mes);
        break;
    case 13:
        printf("O mês escolhido (%d) é Dezembro.",mes);
        break;    
    default:
        printf("Você digitou um mês inválido");
        return 1;
        break;
    }
    return 0;
}