#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int fuman=0, nfuman=0,i=1,n;

    printf("Olá, bem vindo(a) ao restaurante Comida Boa. \n");
    printf("Para fazer sua reserva, digite 0 ou 1. \n");


    while (i <= 50)
    {

    printf("A opção 0 para fazer reserva na área dos fumantes e 1 na área dos não fumantes. \n");
    scanf("%d", &n);

        if (n == 0)
        {
            if(fuman < 25)
            {
                fuman += 1;
                i++;
            }
            else
                printf("Não há mais reservas na área de fumantes. \n");
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
                printf("Não há mais reservas na área de não fumantes. \n");
            }

        }
        else
        printf("Valor incorreto. \n");

    }

    printf("Obrigado pela preferência, sua reserva foi a última do dia.");

    return 0;

}
