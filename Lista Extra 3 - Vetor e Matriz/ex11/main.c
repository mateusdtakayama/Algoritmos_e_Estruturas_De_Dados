#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10], neg = 0, pos = 0;

    for(int i =0; i < 10; i++){
        printf("Insira o valor do vetor[%d]: \n", i);
        scanf("%d" , &vet[i]);

        if(vet[i] < 0){
            neg++;
        }
        else{
            pos = pos + vet[i];
        }
    }

    printf("%d numeros negativos. \n" , neg);
    printf("A soma dos positivos deu %d." , pos);
    return 0;
}
