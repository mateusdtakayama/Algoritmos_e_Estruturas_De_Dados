#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int a;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o valor da variável: \n");
    scanf("%d" , &a);

    if((a%2) == 0)
        printf("o resultado da operação é de: %d" , a+5);
    else
        printf("o resultado da operação é de: %d" , a+8);
    return 0;
}
