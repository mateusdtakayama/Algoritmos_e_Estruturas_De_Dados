#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10];

    for(int i=0; i<10;i++){
        printf("vet[%d]: ", i);
        scanf("%d" , &vet[i]);
    }
    printf("\n");

    int trocas, aux;

    //bubble-sort

    do{
        trocas = 0;

        for(int i=0; i <10; i++){
            if(vet[i] > vet[i+1]){
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
                trocas = 1;
            }
        }
    }while(trocas);

    for(int i=0; i<10;i++){
        printf("%d ", vet[i]);
    }

    return 0;
}
