#include <stdio.h>
#include <string.h>

int main(){
    char palavra1[20];
    char palavra2[20];
    printf("digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("digite a segunda palavra: ");
    scanf("%s", palavra2);
    if (strlen (palavra1) > strlen(palavra2))
    {
        printf("a maior palavra: %s", palavra1);
    }
    else
    {
        printf("a maior palavra é %s", palavra2);

    }
    return 0;
}