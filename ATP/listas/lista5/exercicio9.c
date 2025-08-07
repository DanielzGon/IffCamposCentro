#include <stdio.h>
int main()
{
    float saldo = 0;
    float valorOperacao;
    char operacao;
    do
    {
        printf("Digite qual a operação desejada: ");
        printf("a - depósito\nb - retirada\nc - saldo\nd - Sair do Programa\n");
        scanf("%c", &operacao);
        switch (operacao)
        {
        case 'A':
        case 'a':
            printf("\nVocê escolheu depósito, digite o valor desejado: ");
            scanf("%f", &valorOperacao);
            saldo = saldo + valorOperacao;
            printf("\nDepósito confirmado, seu novo saldo é %.3fR$\n", saldo);
            break;
        case 'B':
        case 'b':
            printf("\nVocê escolheu retirada, digite o valor desejado: ");
            scanf("%f", &valorOperacao);
            if (saldo >= valorOperacao)
            {
                saldo = saldo - valorOperacao;
                printf("\nRetirada confirmada, seu novo saldo é %.3fR$\n", saldo);
            }
            else
            {
                printf("\nSaldo insuficiente para retirada\n");
            }
            break;
        case 'C':
        case 'c':
            printf("\nSeu saldo é de %.3fR$\n", saldo);
            break;
        case 'D':
        case 'd':
            printf("\nObrigado por usar nosso banco\n");
            break;
        default:
            printf("Operação inválida\n");
            break;
        }
    } while (operacao != 'd');
    return 0;
}