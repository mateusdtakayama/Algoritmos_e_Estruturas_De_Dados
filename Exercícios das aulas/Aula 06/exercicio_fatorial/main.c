#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int num, i, acumulada;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o número a ser calculado o fatorial: \n");
    scanf("%d" , &num);

    i = 1;
    acumulada = 1;
    while ( i <= num){
        acumulada = acumulada * i;
        if(i == 1){
            printf("%d" , i);
        }
        else
        printf("*%d" , i);
        i++;
    }


    printf("=%d" , acumulada);



    return 0;
}
