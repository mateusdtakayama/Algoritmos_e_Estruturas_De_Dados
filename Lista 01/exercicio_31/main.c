#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float pesoInicial, pesoEng, pesoEmg;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o peso inicial:\n");
    scanf("%f", &pesoInicial);
    pesoEng = pesoInicial + pesoInicial*0.15;
    pesoEmg = pesoInicial - pesoInicial*0.20;
    printf("O peso inicial � de: %0.2f kilos \n", pesoInicial);
    printf("O peso ap�s emagrecer � de: %0.2f kilos \n", pesoEmg);
    printf("O peso ap�s engordar � de: %0.2f kilos \n", pesoEng);
    return 0;
}
