#include <stdio.h>
int main (){
    int i;
    char listaNomes [50][50];
    for(i = 0; i < 50; i++)
    {
       printf ("Digite seu nome: ");
        scanf("%s", listaNomes[i]);
    }
    printf("\nOs números digitados foram: ");
    for ( i = 49; i >= 0; i--)
    {
        printf("\n%s", listaNomes[i]);
    }
    return 0;
}