#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10], maiorpos, maior;

        printf("Insira o valor para o vetor[0]: \n");
        scanf("%d", &vet[0]);
        maior = 0;
        maiorpos = 0;
    for(int i = 1; i < 10; i++){
        printf("Insira o valor para o vetor[%d]: \n" , i);
        scanf("%d", &vet[i]);

        if(vet[i] > maior){
            maiorpos = i;
            maior = vet[i];
        }
    }

    printf("O vetor[%d]: %d foi o maior.", maiorpos, maior);
    return 0;
}
