#include <stdio.h>
#include <stdlib.h>

int main()
{
    float val_litro, reais, litros;
    printf("Insira o valor do litro da gasolina: \n");
    scanf("%f" , &val_litro);
    printf("Insira a quantidade de reais que deseja abastecer: \n");
    scanf("%f" , &reais);
    litros = reais/val_litro;
    printf("Foi abastecido: %f litros\n" , litros);
    return 0;
}
