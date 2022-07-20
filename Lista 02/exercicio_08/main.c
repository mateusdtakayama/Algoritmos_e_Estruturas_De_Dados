#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int num;
    float valor, conta;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira quanto vale o produto: \n");
    scanf("%f" , &valor);
    printf("Digite 1 se for à vista em dinheiro ou cheque: \n");
    printf("Digite 2 se for à vista no cartão de crédito: \n");
    printf("Digite 3 se for 2x no crédito: \n");
    printf("Digite 4 se for mais vezes no crédito: \n");
    scanf("%d" , &num);

    if(num == 1)
        conta = valor-valor*0.10;
    else if(num == 2)
        conta = valor-valor*0.15;
    else if(num == 3)
        conta = valor;
    else if(num == 4)
        conta = valor + valor*0.10;
    printf("O valor a ser pago é de: R$%.2f" , conta);
    return 0;
}
