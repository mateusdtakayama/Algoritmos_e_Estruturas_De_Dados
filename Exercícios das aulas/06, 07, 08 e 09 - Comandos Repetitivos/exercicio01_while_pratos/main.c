#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int numPrato, i;
    int op1 = 0, op2 = 0, op3 = 0, op4 = 0;
    setlocale(LC_ALL, "Portuguese");
    printf("O prato 1 � Strogonoff\n");
    printf("O prato 2 � Lasanha\n");
    printf("O prato 3 � Bolohesa\n");
    printf("O prato 4 � Macarr�o\n");
    printf("Ao apertar 5 fechar� o programa\n\n");

    while(numPrato != 5)
    {
        printf("Insira o n�mero do prato: ");
        scanf("%d", &numPrato);

        switch(numPrato)
        {
        case 1:
            printf("1 - Strogonoff \n");
            op1 += 1;
            break;

        case 2:
            printf("2 - Lasanha \n");
            op2 += 1;
            break;

        case 3:
            printf("3 - Bolonhesa \n");
            op3 += 1;
            break;

        case 4:
            printf("4 - Macarr�o \n");
            op4 += 1;
            break;
        }
    }
    printf("Foram compradas %d Strogonoffs, %d Lasanhas, %d Bolonhesas e %d Macarr�es.\n " , op1, op2, op3, op4);
    return 0;
}
