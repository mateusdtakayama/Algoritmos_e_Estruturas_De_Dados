#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float n1, n2, n3, calc;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o numero 1:\n");
    scanf("%f" , &n1);
    printf("Insira o numero 2: \n");
    scanf("%f" , &n2);
    printf("Insira o numero 3: \n");
    scanf("%f" , &n3);
    calc = n1*n2*n3;
    printf("A multiplicação dos três números é: %0.2f" , calc);
    return 0;
}
