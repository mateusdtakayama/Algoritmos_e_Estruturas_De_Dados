#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int a, b, pot, i;
    setlocale(LC_ALL, "Portuguese");

    printf("Insira o valor de a: \n");
    scanf("%d" , &a);
    printf("Insira o valor de b: \n");
    scanf("%d" , &b);

    pot = 1;
    i = 0;

    while(i < b){
    printf("O resultado de %d^%d é: %d\n" , a, i, pot);
    pot = pot*a;
    i++;
    }


    return 0;
}
