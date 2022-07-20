#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cent, dez, uni, sobra;
    printf("Fale um numero de ate 3 digitos: \n");
    scanf("%d" , &num);
    cent = num/100;
    printf("Centena: %d\n", cent);
    sobra = num - (cent*100);
    dez = sobra/10;
    printf("Dezena: %d\n" , dez);
    uni = sobra - (dez*10);
    printf("Unidade: %d\n" , uni);


    return 0;
}
