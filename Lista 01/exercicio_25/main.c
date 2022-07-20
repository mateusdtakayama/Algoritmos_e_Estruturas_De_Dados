#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float altura, raio, calcVolume;
    printf("De o raio da caixa dagua em cm: \n");
    scanf("%f", &raio);
    printf("De a altura da caixa dagua em cm: \n");
    scanf("%f", &altura);
    calcVolume = pow(raio,2)*3.14*altura;
    printf("O volume da caixa dagua: %0.2f cm3", calcVolume);

    return 0;
}
