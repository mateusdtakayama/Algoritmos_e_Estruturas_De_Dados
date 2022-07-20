#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int num, i, acumulada;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o n da PA: \n");
    scanf("%d" , &num);

    i = 1;
    acumulada = 0;
    while ( i <= num){
        acumulada = acumulada +i;
        i++;
    }


    printf("A soma de é: %d" , acumulada);



    return 0;
}
