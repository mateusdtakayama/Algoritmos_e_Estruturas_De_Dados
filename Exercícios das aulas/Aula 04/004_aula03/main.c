#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3;

    printf("Insira o primeiro número: \n");
    scanf("%d", &n1);
    printf("Insira o segundo número: \n");
    scanf("%d", &n2);
    printf("Insira o terceiro número: \n");
    scanf("%d", &n3);

    //se o numero 1 for o maior, depois ordenar o numero 2 e 3
    if((n1 >= n2) && (n1 >= n3))
    {
        if(n2 >= n3)
        {
            printf("%d,%d,%d", n3,n2,n1);
        }
        else
        {
            printf("%d %d %d}", n2, n3, n1);
        }
    }
    //se o numero 2 for o maior, depois ordenar o numero 1 e 2
    if((n2 >= n1) && (n2 >= n3))
    {
        if(n1 >= n3)
        {
            printf("%d,%d,%d", n3,n1,n2);
        }
        else
        {
            printf("%d,%d,%d}", n1, n3, n2);
        }
    }
    //se o numero 3 for o maior, depois ordenar o numero 2 e 1
    if((n3 >= n1) && (n3 >= n2))
    {
        if(n2 >= n1)
        {
            printf("%d,%d,%d", n1,n2,n3);
        }
        else
        {
            printf("%d,%d,%d", n2, n1, n3);
        }
    }
    return 0;

}
