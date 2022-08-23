#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[6] = {1, 0, 5, -2, -5, 7}, soma;
    soma = vetor[0]+vetor[5]+vetor[1];

    printf("%d. \n" , soma);

    vetor[4] = 100;

    for(int i = 0; i < 6; i++){
        printf("Vetor[%d] = %d. \n" , i, vetor[i]);
    }
    return 0;
}
