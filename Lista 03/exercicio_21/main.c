#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int fuman=0, nfuman=0,i=1,n;

    printf("Ol�, bem vindo(a) ao restaurante Comida Boa. \n");
    printf("Para fazer sua reserva, digite 0 ou 1. \n");


    while (i <= 50)
    {

    printf("A op��o 0 para fazer reserva na �rea dos fumantes e 1 na �rea dos n�o fumantes. \n");
    scanf("%d", &n);

        if (n == 0)
        {
            if(fuman < 25)
            {
                fuman += 1;
                i++;
            }
            else
                printf("N�o h� mais reservas na �rea de fumantes. \n");
        }
        else if (n == 1)
        {
            if(nfuman < 25)
            {
                nfuman += 1;
                i++;
            }
            else
            {
                printf("N�o h� mais reservas na �rea de n�o fumantes. \n");
            }

        }
        else
        printf("Valor incorreto. \n");

    }

    printf("Obrigado pela prefer�ncia, sua reserva foi a �ltima do dia.");

    return 0;

}
