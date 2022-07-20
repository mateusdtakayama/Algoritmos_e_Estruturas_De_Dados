#include <stdio.h>
#include <stdlib.h>

int main()
{
    float quilos, valor;
    printf("Insira o valor de quilos que deu o prato: \n");
    scanf("%f" , &quilos);
    valor = quilos*12.00;
    printf("O valor a pagar eh de: %f reais" , valor);
    return 0;
}
