#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int frango;
    float chip, anel, valTotal;
    printf("Insira a quantidade total de frangos: \n");
    scanf("%d" , &frango);
    chip = frango*4.00;
    anel = frango*3*3.50;
    valTotal = chip+anel;
    printf("O valor a ser pago para marcar todos os frangos é de: R$ %0.2f" , valTotal);
    return 0;
}
