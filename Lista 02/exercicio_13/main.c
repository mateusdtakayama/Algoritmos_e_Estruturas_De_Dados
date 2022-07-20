#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int dinheiro, sobra, cem, cinquenta, dez, cinco, um;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o dinheiro em reais: \n");
    scanf("%d" , &dinheiro);

    cem = dinheiro/100;
    printf("%d notas de cem. \n" , cem);
    cinquenta = (dinheiro - (cem*100))/50;
    printf("%d notas de cinquenta. \n" , cinquenta);
    dez = (dinheiro - (cem*100) - (cinquenta * 50))/10;
    printf("%d notas de dez. \n" , dez);
    um = dinheiro - (cem*100) - (cinquenta * 50) - (dez*10);
    printf("%d notas de um. \n" , um);
    return 0;
}
