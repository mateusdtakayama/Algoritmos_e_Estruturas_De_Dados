#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int saldo;
    float resultado;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o saldo médio: \n");
    scanf("%d" , &saldo);

    if(saldo <= 200)
    resultado = 0;
    else if(saldo <= 400)
    resultado = saldo*0.2;
    else if (saldo <= 600)
    resultado = saldo*0.3;
    else
    resultado = saldo*0.4;

    printf("Para o saldo %d o crédito será de %.2f" , saldo, resultado);
    return 0;
}
