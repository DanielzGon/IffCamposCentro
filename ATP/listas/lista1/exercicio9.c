#include <stdio.h>

int main(void)
{
    float salarioPadrao, porcentagemReajuste, salarioPosReajuste, valorReajuste;

    printf("Digite o salário atual do funcionário:\n ");
    scanf("%f", &salarioPadrao);
    
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &porcentagemReajuste);

    valorReajuste = salarioPadrao * (porcentagemReajuste/100);
    salarioPosReajuste = salarioPadrao+valorReajuste;
    printf("O salarío se reajustará para: %f\n", salarioPosReajuste);

    return 0;
}