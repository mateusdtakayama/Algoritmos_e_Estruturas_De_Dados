#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float sMin, sFun , calc;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o sal�rio m�nimo:\n");
    scanf("%f", &sMin);
    printf("Insira o sal�rio do funcion�rio:\n");
    scanf("%f", &sFun);
    calc = sFun/sMin;
    printf("O funcion�rio recebe %0.1f sal�rios m�nimos \n", calc);
    return 0;
}
