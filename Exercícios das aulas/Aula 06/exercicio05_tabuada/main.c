#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int i, a;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o a: \n");
    scanf("%d", &a);

    i = 0;
    while(i <= 10)
    {
        printf("%d*%d = %d\n",a,i,a*i);
        i++;
    }

    return 0;
}
