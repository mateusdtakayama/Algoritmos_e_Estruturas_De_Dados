#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int ano;
    float taxa, valTabela;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o ano do carro: \n");
    scanf("%d" , &ano);
    printf("Insira o valor de tabela do ve�culo: \n");
    scanf("%f" , &valTabela);
    printf("O valor de tabela do carro � de: R$%.2f \n" , valTabela);
    printf("O ano do caro �: %d \n" , ano);

    if(ano<1990)
        taxa = valTabela*0.01;
    else
        taxa = valTabela*0.015;

    printf("O valor da taxa a ser pago �: R$%.2f" , taxa);
    return 0;
}
