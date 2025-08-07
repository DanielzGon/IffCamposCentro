#include <stdio.h>
int main()
{
    const int numeroDeFichas = 50;
    int i, altura;
    int qntMulheres = 0, somaAlturas = 0, somaAlturasFeminas = 0;
    double mediaMulheres = 0, mediatotal = 0;
    int maiorAltura = -999999;
    int menorAltura = 999999;
    char sexo;
    for (i = 1; i <= numeroDeFichas; i++)
    {
        printf("Digite seu sexo: M para masculino e F para feminino: ");
        scanf(" %c", &sexo);
        printf("\nDigite sua altura em cm: ");
        scanf("%d", &altura);
        if (altura < menorAltura)
        {
            menorAltura = altura;
        }
        if (altura > maiorAltura)
        {
            maiorAltura = altura;
        }
        if (sexo == 'F' || sexo == 'f')
        {
            qntMulheres++;
            somaAlturasFeminas = somaAlturasFeminas + altura;
        }
        somaAlturas = somaAlturas + altura;
    }
    if (qntMulheres >= 1)
    {
        mediaMulheres = (double)somaAlturasFeminas / qntMulheres;
        printf("\n A média de altura das mulheres é de %.2f cm", mediaMulheres);
    }
    else
    {
        printf("Não foram registradas mulheres");
    }
    mediatotal = (double)somaAlturas / numeroDeFichas;
    printf("\nA menor altura da turma é %d e a maior altura é %d ", menorAltura, maiorAltura);
    printf("A média de altura da turma é %.2f", mediatotal);
    return 0;
}