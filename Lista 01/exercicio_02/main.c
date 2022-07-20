#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ferraduras, num;
    printf("Digite o numero de cavalos comprados no haras: \n");
    scanf("%d" , &num);
    ferraduras = num*4;
    printf("O numero de ferraduras necessarias sera de: %d" , ferraduras);
    return 0;
}
