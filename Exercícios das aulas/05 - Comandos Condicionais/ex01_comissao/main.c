#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float valorVendido, comissao;
    printf("Insira o valor vendido pelo corretor de ações em reais: \n");
    scanf("%f", &valorVendido);
    printf("Valor vendido pelo corretor foi de: R$%.2f\n",valorVendido);

    if(valorVendido <= 2500.00)  // primeira condição
    {
        comissao = 30 + 0.017*valorVendido;
        if(comissao < 39.00)  //caso nao obtenha 39 conto
        {
            printf("A comissão foi de: R$39,00 \n");
        }
        else  //se for maior que 39 conto e vender menos que 2500
            printf("A comissão foi de R$%.2f \n", comissao);

    }
    else if((valorVendido<= 6250.00))   //se vender entre 2500 e 6250
    {
        comissao = 56 + valorVendido*0.0066;
        printf("A comissão foi de: R$%.2f \n", comissao);

    }
    else if((valorVendido<= 20000.00))   //se vender entre 6250 e 20000
    {
        comissao = 76 + valorVendido*0.0034;
        printf("A comissão foi de: R$%.2f \n", comissao);
    }
    else if((valorVendido<= 50000.00))   //se vender entre 20.000 e 50.000
    {
        comissao = (valorVendido*0.0022)+ 100;
        printf("A comissão foi de: R$%.2f \n", comissao);
    }
    else if((valorVendido<= 500000.00))   //se vender entre 50.000 e 500.000
    {
        comissao = 155 + valorVendido*0.0011;
        printf("A comissão foi de: R$%.2f \n", comissao);
    }
    else if((valorVendido>500000.00))   //se vender mais de 500.000
    {
        comissao = 255 + valorVendido*0.0009;
        printf("A comissão foi de: R$%.2f \n", comissao);
    }
    return 0;
}
