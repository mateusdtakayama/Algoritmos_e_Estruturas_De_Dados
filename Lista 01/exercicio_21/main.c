#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int lata350, garrafa600,garrafa2l, total;
    printf("Insira quantas latas 350ml foram compradas: \n");
    scanf("%d" , &lata350);
    printf("Insira quantas garrafas 600ml foram compradas: \n");
    scanf("%d" , &garrafa600);
    printf("Insira quantas garrafas 2L foram compradas: \n");
    scanf("%d" , &garrafa2l);
    total = lata350*350+garrafa600*600+garrafa2l*2000;
    printf("A quantidade total de ml's comprados é de: %d" , total);


    return 0;
}
