#include <stdio.h>
struct Produto {
    float preco;
    int quantidade;
    float faturamentoProduto;
};
int main()
{
    const int NUM_PRODUTOS = 500;
    struct Produto estoque[NUM_PRODUTOS];
    int i;
    double faturamentoTotal = 0.0;
    printf("--- Leitura de Dados de %d Produtos ---\n", NUM_PRODUTOS);
    for (i = 0; i < NUM_PRODUTOS; i++)
    {
        printf("\n--- Produto %d ---\n", i);
        printf("Digite o preço: R$ ");
        scanf("%f", &estoque[i].preco);
        printf("Digite a quantidade vendida: ");
        scanf("%d", &estoque[i].quantidade);
    }
    for (i = 0; i < NUM_PRODUTOS; i++)
    {
        estoque[i].faturamentoProduto = estoque[i].preco * estoque[i].quantidade;
        faturamentoTotal = faturamentoTotal + estoque[i].faturamentoProduto;
    }
    printf("\n\n--- RELATÓRIO FINAL DE VENDAS ---\n");
    printf("\n(a) Valor arrecadado por produto:\n");
    for (i = 0; i < NUM_PRODUTOS; i++)
    {
        printf("  - Produto [%d]: R$ %.2f\n", i, estoque[i].faturamentoProduto);
    }
    printf("\n(b) O faturamento total da loja foi de: R$ %.2lf\n", faturamentoTotal);
    return 0;
}