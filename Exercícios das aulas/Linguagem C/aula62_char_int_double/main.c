#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    printf("Endere�o x = %d e valor de x = %d \n" , pX, *pX);
    printf("Endere�o y = %d e valor de x = %lf \n" , pY, *pY);
    printf("Endere�o z = %d e valor de x = %c \n" , pZ, *pZ);

    double soma = *pX + *pY;

    printf("Soma: %lf" , soma);

    return 0;
}
