#include <stdio.h>
#include <stdlib.h>

int main()
{

    char nome[20];
    int n = 0;

    printf("Insira seu nome: \n");
    scanf("%s" , nome);
    //printf("seu nome e: %s" , nome);

     printf("o tamanho do nome e de: %d.", n);

    for(int i = 0; i < n; i++){
        if(nome[i] != '\0'){
            n++;
            printf("*");
        }else{
        i++;
        i++;}
    }
 printf("o tamanho do nome e de: %d.", n);

    return 0;
}
