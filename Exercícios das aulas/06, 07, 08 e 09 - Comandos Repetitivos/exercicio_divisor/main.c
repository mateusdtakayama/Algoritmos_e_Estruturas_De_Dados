#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int num, i, acumulada;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o número n: \n");
    scanf("%d" , &num);

    i = 2;

    while(i <= num){
        if((num%i)==0){
            printf("%d é divisor de %d. [%d/%d = %d] \n" , i, num , num, i, num/i);
        }
    i++;
    }



    return 0;
}
