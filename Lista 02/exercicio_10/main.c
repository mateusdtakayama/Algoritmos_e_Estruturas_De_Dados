#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int n1, n2;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o n1: \n");
    scanf("%d" , &n1);
    printf("Insira o n2: \n");
    scanf("%d" , &n2);

    if(n1>n2)
        printf("%d" , n1-n2);
    else
        printf("%d" , n2-n1);
    return 0;
}
