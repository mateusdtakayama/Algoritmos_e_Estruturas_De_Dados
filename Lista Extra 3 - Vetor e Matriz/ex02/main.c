#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[6];

    for(int i = 0; i < 6; i++){
        printf("Insira o valor para o vetor[%d]: \n", i);
        scanf("%d" , &vetor[i]);
    }

    for(int i = 0; i < 6; i++){
        printf("Vetor[%d]: %d. \n" ,i , vetor[i]);
    }

    return 0;
}
