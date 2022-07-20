#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horaNormal, horaExtra, salLiq, salBruto;
    printf("Digite a quantidade de horas normais trabalhadas: \n");
    scanf("%f" , &horaNormal);
    printf("Digite a quantidade de horas extras trabalhadas: \n");
    scanf("%f" , &horaExtra);
    salLiq = horaNormal*10 + horaExtra*15;
    salBruto = salLiq - salLiq*0.10;
    printf("O salario liquido eh de: %.2f reais \n" , salLiq);
    printf("O salario bruto eh de: %.2f reais \n" , salBruto);

    return 0;
}
