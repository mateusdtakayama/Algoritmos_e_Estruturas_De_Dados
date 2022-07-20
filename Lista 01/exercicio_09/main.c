#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qntP, qntM, qntG;

    printf("Insira a quantidade de camisetas P vendidas: \n");
    scanf("%d" , &qntP);
    printf("Insira a quantidade de camisetas M vendidas: \n");
    scanf("%d" , &qntM);
    printf("Insira a quantidade de camisetas G vendidas: \n");
    scanf("%d" , &qntG);

    int valorP, valorM, valorG;
    valorP = qntP*10;
    valorM = qntM*12;
    valorG = qntG*15;
    int total;
    total = valorP + valorM + valorG;
    printf("O valor total arrecadado foi de: %d \n" , total);
    return 0;
}
