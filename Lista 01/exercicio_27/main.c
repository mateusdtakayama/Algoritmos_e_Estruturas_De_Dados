#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float n1, n2, calc;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o numero 1:\n");
    scanf("%f" , &n1);
    printf("Insira o numero 2: \n");
    scanf("%f" , &n2);
    calc = n1/n2;
    printf("A divis�o dos dois n�meros �: %0.2f" , calc);
    return 0;
}
