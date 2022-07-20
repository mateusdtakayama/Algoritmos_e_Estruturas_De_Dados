#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int a, b, conta;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira A:\n");
    scanf("%d", &a);
    printf("Insira B:\n");
    scanf("%d", &b);
    if(a==b)
    conta = a+b;
    else
    conta = a*b;
    printf("O resultado é: %d" , conta);

    return 0;
}
