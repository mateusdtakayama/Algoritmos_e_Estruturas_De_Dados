#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int a;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o valor da vari�vel: \n");
    scanf("%d" , &a);

    if((a%2) == 0)
        printf("o resultado da opera��o � de: %d" , a+5);
    else
        printf("o resultado da opera��o � de: %d" , a+8);
    return 0;
}
