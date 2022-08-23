#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[8], X, Y;

    for(int i = 0; i < 8; i++){
        printf("Insira um valor para o Vetor[%d]: \n", i);
        scanf("%d" , &vetor[i]);
    }

    printf("Insira um valor para X: \n");
    scanf("%d" , &X);
    printf("Insira um valor para Y: \n");
    scanf("%d" , &Y);

    printf("A soma do vetor[%d] + vetor[%d] = %d" , X, Y, vetor[X]+vetor[Y]);
    return 0;
}
