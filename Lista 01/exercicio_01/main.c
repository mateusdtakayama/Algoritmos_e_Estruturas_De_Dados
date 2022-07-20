#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, area;

    printf("De o valor do primeiro lado para calcular a area do terreno: \n");
    scanf("%d" , &a);
    printf("De o valor do segundo lado para calcular a area do terreno: \n");
    scanf("%d" , &b);
    area = a*b;
    printf("O Valor da area eh de: %d m2" , area);




    return 0;
}
