#include <stdio.h>
int main()
{
    int operacao;
    int contadorDeposito = 0;
    int contadorRetirada = 0;
    int contadorSaldo = 0;
    int contadorExtrato = 0;
    do
    {
        printf("Digite qual a operação desejada: ");
        printf("1 - depósito\n2 - retirada\n3 - saldo\n4 - Extrato\n5 - Sair do Programa\n");
        scanf("%d", &operacao);
        switch (operacao)
        {
        case 1:
            contadorDeposito++;
            break;
        case 2:
            contadorRetirada++;
            break;
        case 3:
            contadorSaldo++;
            break;
        case 4:
            contadorExtrato++;
            break;
        default:
            printf("fim do programa\n");
            break;
        }
    } while (operacao != 5);
    printf("A quantidade de depositos foram: %d\n", contadorDeposito);
    printf("A quantidade de Retiradas foram: %d\n", contadorRetirada);
    printf("A quantidade de Saldos foram: %d\n", contadorSaldo);
    printf("A quantidade de Extratos foram: %d\n", contadorExtrato);
    return 0;
}