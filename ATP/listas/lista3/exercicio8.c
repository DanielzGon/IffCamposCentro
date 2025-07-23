#include <stdio.h>
int main(){
    int idadeNadador, categoria;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idadeNadador);
    if (idadeNadador >= 5 && idadeNadador <= 7)
    {
        categoria = 1;
    } else
    {
        if (idadeNadador <= 10) {
            categoria = 2;
        } else
            {
            if (idadeNadador <= 13)
         {
                categoria = 3;
            } else
             {
                if (idadeNadador <= 17)
             {
                    categoria = 4;
                } else {
                    categoria = 5;
                }
            }
        }
    }
        switch (categoria)
        {
        case 1:
            printf("Categoria: Infantil A\n");
            break;
        case 2: 
            printf("Categoria: Infantil B\n");
            break;
        case 3:
            printf("Categoria: Juvenil A\n");
            break;
            case 4:
            printf("Categoria: Juvenil B\n");
            break;
        case 5:
            printf("Adulto\n");
            break;
        default:
            break;
        }
    
    return 0;
}