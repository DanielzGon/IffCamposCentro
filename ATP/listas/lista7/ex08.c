#include <stdio.h>
int main()
{
    const int NUM_PRODUTOS = 500;
    float precos[NUM_PRODUTOS];
    int quantidades[NUM_PRODUTOS];
    float faturamentoPorProduto[NUM_PRODUTOS];
    float faturamentoTotal = 0.0;
    int maiorQuantidade;
    int posicaoMaisVendido = 0;
    int menorQuantidade;
    int posicaoMenosVendido = 0;
    int i;
    printf("--- Leitura de Dados de %d Produtos ---\n", NUM_PRODUTOS);
    for (i = 0; i < NUM_PRODUTOS; i++)
    {
        printf("\n--- Produto %d ---\n", i);
        printf("Digite o preço: R$ ");
        scanf("%f", &precos[i]);
        printf("Digite a quantidade vendida: ");
        scanf("%d", &quantidades[i]);
    }
    maiorQuantidade = quantidades[0];
    menorQuantidade = quantidades[0];
    for (i = 0; i < NUM_PRODUTOS; i++)
    {
        faturamentoPorProduto[i] = precos[i] * quantidades[i];
        faturamentoTotal = faturamentoTotal + faturamentoPorProduto[i];
        if (quantidades[i] > maiorQuantidade)
        {
            maiorQuantidade = quantidades[i];
            posicaoMaisVendido = i;
        }
        if (quantidades[i] < menorQuantidade)
        {
            menorQuantidade = quantidades[i];
            posicaoMenosVendido = i;
        }
    }
    printf("\n\n--- RELATÓRIO FINAL DE VENDAS ---\n");
    printf("\n(a) Valor arrecadado por produto:\n");
    for (i = 0; i < NUM_PRODUTOS; i++)
    {
        printf("  - Produto na posição [%d]: R$ %.2f\n", i, faturamentoPorProduto[i]);
    }
    printf("\n(b) O faturamento total da loja foi de: R$ %.2f\n", faturamentoTotal);
    printf("\n(c) O preço do produto mais vendido é: R$ %.2f (Vendeu %d unidades)\n", precos[posicaoMaisVendido], maiorQuantidade);
    printf("\n(d) A posição do produto menos vendido é: [%d] (Vendeu %d unidades)\n", posicaoMenosVendido, menorQuantidade);
    return 0;
}