#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50];
    char sexo[10];
    double pesoMax = 0.0;
    double mediaPeso;
    char pessoaMaisPesada[50];
    char brasileiraMaisLeve[50];
    float pesoMaisLeve = 9999;
    float pesoMaispesado = -9999;
    float peso;
    int numeroPessoas = 0;
    char nacionalidade[30];
    int encontrouMulherBrasileira = 0;
    do
    {
        printf("digite o nome: ");
        scanf("%s", nome);
        if (strcmp(nome, "sair") != 0)
        {
            printf("digite o sexo: ");
            scanf("%s", sexo);
            printf("digite o peso: ");
            scanf("%f", &peso);
            printf("digite a nacionalidade: ");
            scanf("%s", nacionalidade);
            numeroPessoas++;
            pesoMax = pesoMax + peso;
            if (peso < pesoMaisLeve && strcmp(nacionalidade, "brasileira") == 0 && strcmp(sexo, "feminino") == 0)
            {

                strcpy(brasileiraMaisLeve, nome);
                pesoMaisLeve = peso;
                encontrouMulherBrasileira = 1;
            }
            if (peso > pesoMaispesado)
            {
                strcpy(pessoaMaisPesada, nome);
                pesoMaispesado = peso;
            }
        }

    } while (strcmp(nome, "sair") != 0);
    mediaPeso = pesoMax / numeroPessoas;
    printf("a media de peso das pessoas e: %lld\n", mediaPeso);
    printf("a pessoa mais pesada e: %s\n", pessoaMaisPesada);
    if (encontrouMulherBrasileira == 1)
    {
        printf("a mulher brasileira mais leve e: %s\n", brasileiraMaisLeve);
    }
    else
    {
        printf("nenhuma mulher brasileira foi encontrada\n");
    }
    return 0;
}