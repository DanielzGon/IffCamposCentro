#include <stdio.h>
#include <stdlib.h>
void transcreverA(int Na){
    printf("A");
    if(Na == 0 ){
        return;
    }
        else{
            printf("b");
            transcreverA(Na - 1);
        }


}

int main() {
    int nA;
    printf("Digite a quantidade de A ");
    scanf("%d", &nA);
    transcreverA(nA);
    
    return 0;
}
