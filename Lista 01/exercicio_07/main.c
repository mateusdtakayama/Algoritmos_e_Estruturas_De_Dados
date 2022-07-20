#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes, dia, total;
    printf("Insira o dia do mes: \n");
    scanf("%d" , &dia);
    printf("Insira o mes do ano: \n");
    scanf("%d" , &mes);
    total = dia + (mes-1)*30;
    printf("O total de dias desde o comeco do ano eh de: %d dias \n " , total);
    return 0;
}
