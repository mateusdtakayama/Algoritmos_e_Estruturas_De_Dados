#include <stdio.h>
#include <stdlib.h>

int main()
{
    float broa, pao, juros, resultado;
    printf("De a quantidade de paes vendidos no dia: \n");
    scanf("%f", &pao);
    printf("De a quantidade de broas vendidos no dia: \n");
    scanf("%f" , &broa);
    printf("O numero de paes vendidos foi de: %f \n" , pao);
    printf("O numero de broas vendidas foi de: %f \n" , broa);
    resultado = (pao*0.12) + (broa*1.5);
    printf("O valor ganho no dia foi de: %f reais" , resultado);
    juros = resultado/10; // divide por 10 pois são 10% que será guardado
    printf("O valor que deve ser guardado eh de: %f reais \n" , juros);

    return 0;
}
