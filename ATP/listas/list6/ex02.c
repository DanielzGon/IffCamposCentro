#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    int altura;
    int somaAlturas = 0;
    double mediaAlturas;
    int alturaMaisBaixa = 999;
    int alturaMaisAlta = 0;
    char nome[50];
    char nomePessoaMaisAlta[50];
    for (i = 1; i <= 20; i++)
    {
        printf("\n--- Pessoa %d ---\n", i);
        printf("Digite o nome: ");
        scanf("%s", nome);

        printf("Digite a altura em cm (ex: 175): ");
        scanf("%d", &altura);

        somaAlturas = somaAlturas + altura;

        if (altura < alturaMaisBaixa)
        {
            alturaMaisBaixa = altura;
        }

        if (altura > alturaMaisAlta)
        {
            alturaMaisAlta = altura;
            strcpy(nomePessoaMaisAlta, nome);
        }
    }

    mediaAlturas = (double)somaAlturas / 20;

    printf("\n\n--- Relatório Final ---\n");
    printf("(a) A média de altura da turma é: %.2f cm\n", mediaAlturas);
    printf("(b) A altura da pessoa mais baixa é: %d cm\n", alturaMaisBaixa);
    printf("(c) O nome da pessoa mais alta é: %s (com %d cm)\n", nomePessoaMaisAlta,alturaMaisAlta);
    return 0;
}