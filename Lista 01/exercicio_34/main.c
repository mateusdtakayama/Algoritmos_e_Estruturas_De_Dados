#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float x, y, calc;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o primeiro lado:\n");
    scanf("%f", &x);
    printf("Insira o segundo lado:\n");
    scanf("%f", &y);
    calc = x*y;
    printf("A área do quadrado é de: %0.2f cm2 \n", calc);
    return 0;
}
