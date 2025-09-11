#include <stdio.h>

int main()
{
    const int TAMANHO = 20;
    int vetorA[TAMANHO];
    int vetorB[TAMANHO];
    int vetorSoma[TAMANHO];
    int i;
    int posicoesIguais = 0;
    printf("--- Leitura do Vetor A ---\n");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("Digite o valor para A[%d]: ", i);
        scanf("%d", &vetorA[i]);
    }
    printf("\n--- Leitura do Vetor B ---\n");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("Digite o valor para B[%d]: ", i);
        scanf("%d", &vetorB[i]);
    }
    for (i = 0; i < TAMANHO; i++)
    {
        vetorSoma[i] = vetorA[i] + vetorB[i];

        if (vetorA[i] == vetorB[i])
        {
            posicoesIguais++;
        }
    }
    printf("\n\n--- RELATÓRIO FINAL ---\n");
    printf("(a) Conteúdo do Vetor 'Soma':\n");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("%d ", vetorSoma[i]);
    }
    printf("\n\n(b) Quantidade de posições com números iguais em A e B: %d\n", posicoesIguais);
    return 0;
}