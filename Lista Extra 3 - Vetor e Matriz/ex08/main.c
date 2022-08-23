#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[6];

    for(int i = 0; i < 6; i++){
        printf("Insira o valor para o vetor[%d]: \n" , i);
        scanf("%d", &vet[i]);
    }

    for(int i = 5; i >= 0; i--){
        printf("Vetor[%d]: %d. \n" , i, vet[i]);
    }


    return 0;
}
