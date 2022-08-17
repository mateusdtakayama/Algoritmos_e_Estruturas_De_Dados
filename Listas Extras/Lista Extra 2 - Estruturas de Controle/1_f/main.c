#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
    int num, i = 1, casas, print;
    setlocale(LC_ALL, "Portuguese");

    printf("Insira um número: \n");
    scanf("%d" , &num);

    casas = num;
    while((casas/10) > 0){
        casas = casas/10;
        i++;
    }
    printf("O número inserido tem %d casas decimais. \n", i);


    for(int j = 0; j <  i; j++){
        print = (num/(pow(10,j)));
        printf("%d \n" , print);

    }
    return 0;
}
