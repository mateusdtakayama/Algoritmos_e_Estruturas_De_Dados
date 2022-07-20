#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float bMenor, bMaior, calc, h;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira a base maior:\n");
    scanf("%f", &bMaior);
    printf("Insira a base menor:\n");
    scanf("%f", &bMenor);
    printf("Insira a altura:\n");
    scanf("%f", &h);
    calc = (((bMaior+bMenor)*h)/2);
    printf("A área do trapézio é de: %0.2f cm2 \n", calc);
    return 0;
}
