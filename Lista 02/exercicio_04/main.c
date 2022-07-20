#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int a, b, conta;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira A:\n");
    scanf("%d", &a);
    if(a>0)
    conta = a*2;
    else
    conta = a*3;
    printf("O resultado é: %d" , conta);

    return 0;
}
