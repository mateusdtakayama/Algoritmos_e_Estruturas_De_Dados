#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salUm,salDois,salTres;
    printf("insira o salario inicial: \n");
    scanf("%f" , &salUm);
    salDois = salUm + salUm*0.15;
    salTres = salDois - salDois*0.08;
    printf("O salario inicial foi de: %.2f \n" , salUm);
    printf("O salario com aumento foi de: %.2f \n" , salDois);
    printf("O salario descontando os impostos foi de: %.2f \n" , salTres);
    return 0;
}
