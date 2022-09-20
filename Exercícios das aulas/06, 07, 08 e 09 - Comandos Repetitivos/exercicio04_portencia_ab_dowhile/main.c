#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int i, a, b, pot;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o a: \n");
    scanf("%d" , &a);
    printf("Insira o b: \n");
    scanf("%d" , &b);

    i = 0;
    pot = 1;
    do{
        printf("O número %d^%d é: %d\n" , a, i , pot);
        i++;
    }while(i < b);

    return 0;
}
