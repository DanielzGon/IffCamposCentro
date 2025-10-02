#include <stdio.h>
int verificaPerfeito(int numero){
     int somaDivisores = 0;
    for(int i = 1; i <= numero/2 ;i++){
        if (numero % i == 0){
            somaDivisores += i;
        }
    }
    if (somaDivisores == numero){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int valor;
    int resultado;
    printf("Digite um numero: ");
    scanf("%d", &valor);   
    resultado = verificaPerfeito(valor);
    if (resultado == 1){
        printf("O numero é perfeito");
    }
    else{
        printf("O numero não é perfeito");
    }
    return 0;
}
