#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vetorA[10], vetorB[10];

    for(int i = 0; i < 10; i++){
        printf("Insira o valor parar o vetorA[%d]: \n" , i);
        scanf("%d" , &vetorA[i]);
        vetorB[i] = pow(vetorA[i] , 2);
    }

    for(int i = 0; i < 10; i++){
        printf("VetorA[%d] = %d. VetorB[%d] = %d. \n" , i, vetorA[i], i, vetorB[i]);
    }
    return 0;
}
