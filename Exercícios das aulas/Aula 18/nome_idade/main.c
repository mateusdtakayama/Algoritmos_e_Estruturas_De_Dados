#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    char st[50];
    int a;

    printf("Insira um nome: \n");
    gets(st);
    printf("Insira uma idade: \n");
    scanf("%d" , &a);

    printf("A pessoa de nome %s tem a idade %d." , st, a);
    return 0;
}
