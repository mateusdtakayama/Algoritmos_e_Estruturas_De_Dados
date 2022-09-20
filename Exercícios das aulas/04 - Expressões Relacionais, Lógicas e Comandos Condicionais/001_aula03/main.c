#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um número inteiro:\n");
    scanf("%d" , &num);


    if((((num % 2 == 0 ) && (num > 10)) || ((num % 2 != 0) && (num < 50 )))){
        printf("Sim \n");
    }

    else{
        printf("Não \n");
    }


    return 0;
}
