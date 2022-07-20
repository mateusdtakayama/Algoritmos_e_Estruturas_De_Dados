#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, Felipe;
    int Carlos, Andre;
    printf("Insira o valor a ser pago no bar: \n");
    scanf("%f" , &valor);
    Carlos = (valor/3);
    Andre = Carlos;
    Felipe = valor - Carlos - Andre;
    printf("o valor a ser pago por Carlos sera de %d reais\n" , Carlos);
    printf("o valor a ser pago por Andre sera de %d reais\n" , Andre);
    printf("o valor a ser pago por Felipe sera de %0.2f reais\n" , Felipe);
    return 0;
}
