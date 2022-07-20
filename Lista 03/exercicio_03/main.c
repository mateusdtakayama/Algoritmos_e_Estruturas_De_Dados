#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    printf("Insira o nome: \n");
    scanf("%s" , nome);
    for(int i=0; i <10; i++){
    printf("%d - %s. \n" , i+1, nome);
    }

    return 0;
}
