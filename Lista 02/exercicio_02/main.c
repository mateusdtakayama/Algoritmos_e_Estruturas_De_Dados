#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int a;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira A:\n");
    scanf("%d", &a);
    if((a%2) == 0)
        printf("O n�mero � par");
    else
        printf("O n�mero � �mpar");
    return 0;
}
