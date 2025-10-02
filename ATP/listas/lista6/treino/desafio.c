#include <stdio.h>
#include <string.h>
int main(){
    char primeiraPessoa[20];
    char ultimaPessoa[20];
    int qntNomeMaisLongo = 0;
    char maiorNome[30];
    int totalNomes = 0;
    char nome[20];
    do{
        printf("digite seu nome: ");
        scanf("%s", nome);
        if (strcmp(nome, "FIM") !=0 )
        {
            if (strlen(nome) > qntNomeMaisLongo)
            {
               qntNomeMaisLongo = strlen(nome);
               strcpy(maiorNome, nome);
            }
            if (totalNomes == 0)
            {
                strcpy(primeiraPessoa, nome);
            }
            strcpy(ultimaPessoa, nome);
           totalNomes++;
        }
    } while (strcmp (nome, "FIM") !=0);
    printf("\n------Relatório Final-------\n");
    printf("O total de nomes digitados foi %d \n", totalNomes);
    printf("O nome da primeira pessoa foi %s\n", primeiraPessoa);
    printf("O nome da ultima pessoa foi %s\n", ultimaPessoa);
    printf("O nome mais longo foi %s\n", maiorNome);
    
return 0;
}