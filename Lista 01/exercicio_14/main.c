#include <stdio.h>
#include <stdlib.h>

int main()
{
    float area, raio;
    printf("De o raio da pizza em centimetros: \n");
    scanf("%f" , &raio);
    area = 3.14* pow(raio,2);
    printf("A pizza mede: %.2f cm2" , area);
    return 0;
}
