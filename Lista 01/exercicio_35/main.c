#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float dMenor, dMaior, calc;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira a diagonal maior:\n");
    scanf("%f", &dMaior);
    printf("Insira a diagonal menor:\n");
    scanf("%f", &dMenor);
    calc = ((dMaior*dMenor)/2);
    printf("A �rea do losango � de: %0.2f cm2 \n", calc);
    return 0;
}
