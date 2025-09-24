#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50];
    char sexo[10];
    long long int pesoMax;
    long long int mediaPeso;
    char pessoaMaisPesada[50];
    char brasileiraMaisLeve[50];
    float pesoMaisLeve = 9999;
    int altura;
    float peso;
    int numeroPessoas = 0;
    char nacionalidade[30];
    while(nome != "sair")
    {
        printf("digite o nome: ");
        scanf("%s", nome);
        printf("digite o sexo: ");
        scanf("%s", sexo);
        printf("digite a altura: ");
        scanf("%d", &altura);
        printf("digite o peso: ");
        scanf("%f", &peso);
        if (peso < pesoMaisLeve)
        {
           strcpy(pessoaMaisPesada, nome);
            pesoMaisLeve = peso;
        }
        printf("digite a nacionalidade: ");
        scanf("%s", nacionalidade);
        numeroPessoas++;
        pesoMax = pesoMax + peso;
    }
        mediaPeso = pesoMax / numeroPessoas;
        printf("a media de peso das pessoas e: %lld\n", mediaPeso);

    return 0;
}