#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int animal, cachorro=0, gato=0,i=0,n;

    printf("Insira quantos animais h�: \n");
    scanf("%d" , &n);
    while(i < n){
    printf("O animal %d � gato (0) ou cachorro(1)?. \n" , i+1);
    scanf("%d", &animal);

    if(animal == 0){
        gato += 1;
        i++;
    }else if (animal ==1){
        cachorro += 1;
        i++;
    }else
        printf("Valor inv�lido.\n");
    }
    printf("H� %d cachorros e %d gatos." , cachorro, gato);
    return 0;

}
