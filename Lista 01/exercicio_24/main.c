#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float x, agua, suco, refresco;

    printf("Insira a quantidade X em litros refrescos: \n");
    scanf("%f" , &refresco);
    agua = refresco*(2.0/10);
    suco = refresco*(8.0/10);
    printf("Será necessário %0.2f litros de água para fazer o refresco \n" , agua);
    printf("Será necessário %0.2f litros de suco de maracujá para fazer o refresco \n" , suco);
}
