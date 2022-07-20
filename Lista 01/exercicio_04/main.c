#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    char nome[50];
    int dias;
    printf("Digite seu primeiro nome: \n");
    scanf("%s" , nome); //quando se trata de strings nao utiiza o &;
    printf("Digite sua idade: \n");
    scanf("%d" , &idade);
    dias = idade*365;
    printf("%s, voce ja viveu %d dias. \n" , nome, dias);



    return 0;
}
