#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float a,b;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira A:\n");
    scanf("%f", &a);
    printf("Insira B:\n");
    scanf("%f", &b);
    if(a>b)
    printf("O maior número é: %.1f" , a);
    else if(b>a)
    printf("O maior número é: %.1f" , b);
    else
    printf("Os números são iguais");


    return 0;
}
