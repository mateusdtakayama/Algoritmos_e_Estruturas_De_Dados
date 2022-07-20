#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float n1, n2, calc;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira a nota 1 de 0-100:\n");
    scanf("%f" , &n1);
    printf("Insira a nota 2 de 0-100: \n");
    scanf("%f" , &n2);
    calc = ((n1*2)+(n2*3))/5;
    printf("A média das notas é: %0.2f" , calc);
    return 0;
}
