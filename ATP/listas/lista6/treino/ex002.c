#include <stdio.h>
#include <string.h>

int main()
{
    const int NUM_PESSOAS = 20;
    
    char nome[50];
    int altura;
    int i;
    
    // Variáveis para o relatório
    long int somaAlturas = 0; // Nome mais claro e 'long int' para segurança
    double mediaAlturas;
    int alturaMaisAlta = 0;
    int alturaMaisBaixa = 9999;
    char nomePessoaMaisAlta[50];

    printf("--- Leitura de Dados de %d Pessoas ---\n", NUM_PESSOAS);

    for (i = 0; i < NUM_PESSOAS; i++)
    {
        printf("\n--- Pessoa %d ---\n", i + 1);
        printf("Digite o nome: ");
        scanf("%s", nome);

        printf("Digite a altura em cm (ex: 175): ");
        scanf("%d", &altura);

        // (a) Acumula a soma para o cálculo da média
        somaAlturas = somaAlturas + altura;

        // (b) Verifica se é a nova menor altura
        if (altura < alturaMaisBaixa)
        {
            alturaMaisBaixa = altura;
        }

        // (c) Verifica se é a nova maior altura
        if (altura > alturaMaisAlta)
        {
            alturaMaisAlta = altura;
            // CORREÇÃO: Copia o nome AQUI, no bloco do mais alto
            strcpy(nomePessoaMaisAlta, nome);
        }
    }

    // --- Cálculos e Relatório Final (DEPOIS do loop) ---

    // (a) Calcula a média final, com precisão
    mediaAlturas = (double)somaAlturas / NUM_PESSOAS;

    printf("\n\n--- RELATÓRIO FINAL ---\n");
    printf("(a) A média de altura da turma é: %.2f cm\n", mediaAlturas);
    printf("(b) A altura da pessoa mais baixa é: %d cm\n", alturaMaisBaixa);
    printf("(c) O nome da pessoa mais alta é: %s (com %d cm)\n", nomePessoaMaisAlta, alturaMaisAlta);

    return 0;
}