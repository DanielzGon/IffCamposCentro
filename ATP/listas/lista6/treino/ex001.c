#include  <stdio.h>
#include  <string.h>
int main(){
    int i = 0;
    int qntMasculino = 0;
    int qntFeminino = 0;
    char nome[10];
    char sexo[10];
    do
    {
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("\n\ndigite seu sexo: ");
    scanf("%s", sexo);
    if (strcmp(sexo, "masculino") == 0){
        qntMasculino++;
    }
    else{
        qntFeminino++;
    }
    i++;
    } while (i<10);
    
 
    printf("\nRelatório Final\n");
    printf("Total de homens: %d\n", qntMasculino);
    printf("Total de mulheres: %d\n", qntFeminino);
    return 0;
}