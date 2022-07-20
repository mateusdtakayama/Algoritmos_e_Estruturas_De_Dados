#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int a;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira A:\n");
    scanf("%d", &a);
    if((a%2) == 0)
        printf("O número é par");
    else
        printf("O número é ímpar");
    return 0;
}
