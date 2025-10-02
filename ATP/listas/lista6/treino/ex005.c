#include <stdio.h>
#include <string.h>
int main()
{
char string1[50];
char string2[50];
printf("digite a primeira string: ");
scanf("%s", string1);
printf("digite a segunda string: ");
scanf("%s", string2);
printf("a %s possui %d caracteres\n ", string1, strlen(string1));
printf("a %s possui %d caracteres\n ", string2, strlen(string2));
if (strlen(string1) == strlen(string2))
{
    printf(" as duas strings possuem o mesmo comprimento de %d caracteres ", strlen(string1));
}
    else
    {
        printf(" as duas strings possuem comprimentos diferentes ");
    }

if (strcmp(string1, string2) ==0)
{
    printf(" as duas strings possuem o mesmo conteudo ");
}
else{
    printf(" as duas strings possuem conteudo diferente ");
}

    return 0;
}