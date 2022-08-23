#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5], menor, maior;

    printf("Insira o valor do vetor[0]: \n");
    scanf("%d" , &vetor[0]);
    menor = vetor[0];
    maior = vetor[0];
    for(int i = 1;i < 5; i++){
        printf("Insira o valor do vetor[%d]: \n" , i);
        scanf("%d", &vetor[i]);

        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }

    for(int i = 0;i < 5; i++){
        printf("vetor[%d]: %d. \n" , i, vetor[i]);

    }

    printf("O menor foi: %d.\n" , menor);
    printf("O maior foi: %d. \n", maior);
    return 0;
}
