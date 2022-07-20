#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[10], maior, menor;

    printf("Insira o valor do número %d: \n" , 1);
    scanf("%d" , &vetor[0]);

    maior = vetor[0];
    menor = vetor[0];

    for(int i = 1; i < 10; i++){
        printf("Insira o valor do número %d: \n" , i+1);
        scanf("%d" , &vetor[i]);

        if(vetor[i] < menor){
            menor = vetor[i];
        }
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    printf("O maior número inserido no vetor foi %d e o menor %d." , maior, menor);
    return 0;
}
