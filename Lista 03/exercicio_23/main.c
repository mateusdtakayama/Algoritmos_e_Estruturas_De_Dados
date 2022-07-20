#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i=0,n, canal, num;
    float acumuladora = 0;
    int c3=0, c5=0, c8=0, c11=0, c13=0;

    printf("Insira quantas casas participarão da pesquisa. \n");
    scanf("%d", &n);


    while (i < n)
    {

        printf("Insira qual canal estava sendo visto (3, 5, 8, 11 ou 13). \n");
        scanf("%d", &canal);
        printf("Insira quantas pessoas estavam vendo o canal. \n");
        scanf("%d", &num);
        acumuladora = acumuladora + num;
        printf("%d" , acumuladora);

        switch(canal)
        {
        case 3:
            c3 = c3 + num;
            break;
        case 5:
            c5 = c5 + num;
            break;
        case 8:
            c8 = c8 + num;
            break;
        case 11:
            c11 = c11 + num;
            break;
        case 13:
            c13 = c13 + num;
            break;
        }
        i++;
    }
    printf("****************************************\n");
    printf("%d pessoas estavam assistindo o canal  3.\n" , c3);
    printf("%d pessoas estavam assistindo o canal  5.\n" , c5);
    printf("%d pessoas estavam assistindo o canal  8.\n" , c8);
    printf("%d pessoas estavam assistindo o canal 11.\n" , c11);
    printf("%d pessoas estavam assistindo o canal 13.\n" , c13);
    printf("****************************************\n");
    printf("A média de espectadores do canal  3 é: %.2f%\n", (c3/acumuladora)*100);
    printf("A média de espectadores do canal  5 é: %.2f%\n", (c5/acumuladora)*100);
    printf("A média de espectadores do canal  8 é: %.2f%\n", (c8/acumuladora)*100);
    printf("A média de espectadores do canal 11 é: %.2f%\n", (c11/acumuladora)*100);
    printf("A média de espectadores do canal 13 é: %.2f%\n", (c13/acumuladora)*100);
    printf("****************************************\n");

    return 0;

}
