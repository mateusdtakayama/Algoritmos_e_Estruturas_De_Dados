#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int Y, G, C, X, Z, E, N, D;
    printf("Coloque um ano inteiro que deseja calcular o dia da Páscoa: \n");
    scanf("%d" , &Y);

    G = ((Y%19) + 1);
    C = ((Y/100) + 1);
    X = ((3*C)/4) - 12;
    Z = ((8*C + 5)/25) - 5;
    E = (11*G + 20 + Z - X)%30;

    if((E == 25 && G > 11) || (E == 24)){
        E = E + 1;
    }

    N = 44 - E;
    if(N < 21){
        N = N + 30;
    }
    D = ((5*Y)/4) - (X + 10);

    //mês

    N = (((N+7)-((D+N)%7)));

    if(N > 31){
        printf("Páscoa: %d de abril de %d" , (N - 31), Y);
    }
    else
        printf("Páscoa: %d de março de %d" , N, Y);

    return 0;
}
