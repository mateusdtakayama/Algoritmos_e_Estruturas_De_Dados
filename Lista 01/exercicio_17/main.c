#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f, c;
    printf("Insira a temperatura em Celsius: \n");
    scanf("%f", &c);
    f = (c*9/5)+32;
    printf("A temperatura em Fahrenheit eh de: %0.2f" , f);

    return 0;
}
