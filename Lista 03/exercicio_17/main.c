#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int quantia,i=0, n=1;
    float bebida, valorconta=0, peso;

    while(i == 0){
    printf("Insira o peso do prato %d em quilos: \n" , n);
    scanf("%f" , &peso);
    printf("Insira o valor da bebida %d em reais: \n" , n);
    scanf("%f" , &bebida);
    valorconta = ((peso*15) + bebida);
    printf("O valor total a ser pago é: %.2f \n"  , valorconta);
    if (bebida == 0 && peso == 0){
        i++;
    }
    n++;
    }


    return 0;

}
