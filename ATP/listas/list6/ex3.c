#include <stdio.h>
#include <string.h>
int main()
{
    int contadorPessoas = 0;
    char nome[50];
    char sexo[15];
    float peso;
    char nacionalidade[50];
    float somaPesos = 0.0;
    double mediaPesos;
    float pesoMaisPesado = 0.0;
    char nomePessoaMaisPesada[50];
    int encontrouMulherBrasileira = 0;
    float pesoMulherMaisLeve = 9999.0;
    char nomeMulherMaisLeve[50];
    for ( ; ; )
    {
        printf("\nDigite o nome da pessoa (ou 'SAIR' para finalizar): ");
        scanf("%s", nome);
        if (strcmp(nome, "SAIR") == 0)
        {
            break;
        }
        printf("Digite o sexo (M/F): ");
        scanf("%s", sexo);
        printf("Digite o peso (ex: 68.5): ");
        scanf("%f", &peso);
        printf("Digite a nacionalidade (ex: Brasileira): ");
        scanf("%s", nacionalidade);
        contadorPessoas++;
        somaPesos = somaPesos + peso;
        if (peso > pesoMaisPesado)
        {
            pesoMaisPesado = peso;
            strcpy(nomePessoaMaisPesada, nome);
        }
        if (strcmp(sexo, "F") == 0 || strcmp(sexo, "f") == 0)
        {
            if (strcmp(nacionalidade, "Brasileira") == 0 || strcmp(nacionalidade, "brasileira") == 0)
            {
                if (peso < pesoMulherMaisLeve)
                {
                    pesoMulherMaisLeve = peso;
                    strcpy(nomeMulherMaisLeve, nome);
                    encontrouMulherBrasileira = 1;
                }
            }
        }
    }
    if (contadorPessoas > 0)
    {
        mediaPesos = (double)somaPesos / contadorPessoas;
        printf("(a) A média de peso de todas as %d pessoas é: %.2f kg\n", contadorPessoas, mediaPesos);
        printf("(b) O nome da pessoa mais pesada é: %s (com %.2f kg)\n", nomePessoaMaisPesada, pesoMaisPesado);
        if (encontrouMulherBrasileira == 1)
        {
            printf("(c) O nome da mulher brasileira mais leve é: %s (com %.2f kg)\n", nomeMulherMaisLeve, pesoMulherMaisLeve);
        }
        else
        {
            printf("(c) Nenhuma mulher brasileira foi encontrada.\n");
        }
    }
    else
    {
        printf("Nenhum dado foi inserido.\n");
    }
    return 0;
}