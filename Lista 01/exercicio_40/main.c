#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
    float a, b, c;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o primeiro cateto:\n");
    scanf("%f", &a);
    printf("Insira o segundo cateto:\n");
    scanf("%f", &b);
    c = sqrt(pow(a,2)+pow(b,2));
    printf("a hipotenusa é de: %0.1f cm \n" , c);
    return 0;
}
