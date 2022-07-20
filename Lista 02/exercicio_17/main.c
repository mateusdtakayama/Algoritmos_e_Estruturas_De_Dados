#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int num = 0;
    int c1= 0, c2= 0, c3=0, c4=0, c5=0, c6=0;
    float conta;
    setlocale(LC_ALL, "Portuguese");
    printf("-------------MENU-------------\n");
    printf("1- Cachorro Quente = R$11,00.\n");
    printf("2- Bauru           = R$ 8,50.\n");
    printf("3- Misto Quente    = R$ 8,00.\n");
    printf("4- Hamburguer      = R$ 9,00.\n");
    printf("5- Cheeseburguer   = R$10,00.\n");
    printf("6- Refrigerante    = R$ 4,50.\n");
    printf("------------------------------\n");
    printf("Digite 7 para finalizar o pedido. \n");


while(num != 7){

    printf("Digite o valor do pedido: \n");
    scanf("%d" , &num);
    switch(num){

    case 1:
        printf("Foi pedido um Cachorro Quente. \n");
        c1 += 1;
        break;
    case 2:
        printf("Foi pedido um Bauru. \n");
        c2 += 1;
        break;
    case 3:
        printf("Foi pedido um Misto Quente. \n");
        c3 += 1;
        break;
    case 4:
        printf("Foi pedido um Hamburguer. \n");
        c4 += 1;
        break;
    case 5:
        printf("Foi pedido um Cheeseburguer. \n");
        c5 += 1;
        break;
    case 6:
        printf("Foi pedido um Refrigerante. \n");
        c6 += 1;
        break;
    }
}
conta = (c1*11.00) +(c2*8.50)+(c3*8.00)+(c4*9.00)+(c5*10.00)+(c6*4.50);
printf("---------------------------\n");
printf("O valor da conta deu: %.2f.\n" , conta);
printf("---------------------------" );

    return 0;
}
