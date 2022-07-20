#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float sMin, sFun , calc;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o salário mínimo:\n");
    scanf("%f", &sMin);
    printf("Insira o salário do funcionário:\n");
    scanf("%f", &sFun);
    calc = sFun/sMin;
    printf("O funcionário recebe %0.1f salários mínimos \n", calc);
    return 0;
}
