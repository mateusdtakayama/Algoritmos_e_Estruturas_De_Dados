#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float salInicial, comiInicial, calcComissao, salFinal;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o sal�rio inicial em reais:\n");
    scanf("%f", &salInicial);
    printf("Insira insira o valor de vendas em reais: \n");
    scanf("%f", &comiInicial);
    calcComissao =  comiInicial*0.04;
    salFinal = calcComissao + salInicial;
    printf("O valor do sal�rio final � de: R$%0.2f\n", salFinal);
    printf("O valor de ganho com comiss�o � de: R$%0.2f\n", calcComissao);
    return 0;
}
