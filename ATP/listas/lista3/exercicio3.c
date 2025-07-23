#include <stdio.h>
int main(){
    float salarioFixo, valorVendas, comissao, salarioFinal;
    printf("Digite o salario fixo: ");
    scanf("%f", &salarioFixo);
    printf("Digite o valor das vendas: ");
    scanf("%f", &valorVendas);
    if(valorVendas<=1500)
    {
        comissao = valorVendas * 0.03;
    }
    else
    {
        comissao = (1500 * 0.03) + ((valorVendas - 1500) * 0.05);
    }
    salarioFinal = salarioFixo + comissao;
    printf("\nO valor da comissão é: R$ %.2f\n", comissao);
    printf("O salário final é: R$ %.2f\n", salarioFinal);
return 0;
}