#include <stdio.h>
int main(){
    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    if (letra == 'a' || letra == 'A' || 
        letra == 'e' || letra == 'E' || 
        letra == 'i' || letra == 'I' || 
        letra == 'o' || letra == 'O' || 
        letra == 'u' || letra == 'U') {
        printf("A letra '%c' sua letra foi vogal.\n", letra);
    } else {
        printf("A letra '%c' sua letra foi uma consoante.\n", letra);
    }
return 0;
}