#include <stdio.h>

int main() {
    int a, b, c, primeiro, segundo, terceiro;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);
    if(a>=b && b>=c)
    {
        primeiro = a;
        segundo = b;
        terceiro = c;
        }
        else
        {
            if(a>=b && c>=b)
            {
                primeiro = a;
                segundo = c;
                terceiro = b;
            }
            else
            {
                if(b>=a && a>=c)
                {
                    primeiro = b;
                    segundo = a;
                    terceiro = c;
                }
                else
                {
                    if(b>=c && c>=a)
                    {
                        primeiro = b;
                        segundo = c;
                        terceiro = a;
                    }
                    else
                    {
                        if(c>=a && a>=b)
                        {
                            primeiro = c;
                            segundo = a;
                            terceiro = b;
                        }
                        else
                        {
                            primeiro = c;
                            segundo = b;
                            terceiro = a;
                        }
                    }
                }
            }
        }
        printf("Ordem decrescente: %d %d %d\n", primeiro, segundo, terceiro);
    return 0;
}