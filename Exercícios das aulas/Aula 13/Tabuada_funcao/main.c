#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tabuada(int n);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    for (int n = 1; n <=10 ; n++){
        tabuada(n);
    }
    return 0;
}

void tabuada(int n)
{
    for(int i = 1; i <= 10; i++)
    {
    printf("%d*%d = %d. \n" , i, n, i*n);
    }
    printf("\n");
}
