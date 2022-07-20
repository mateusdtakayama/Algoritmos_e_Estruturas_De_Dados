#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    int n;
    printf("Insira o nome: \n");
    scanf("%s" , nome);
    printf("Insira o número de vezes: \n");
    scanf("%d" , &n);
    for(int i=0; i < n; i++){
    printf("%d - %s. \n" , i+1, nome);
    }

    return 0;
}
