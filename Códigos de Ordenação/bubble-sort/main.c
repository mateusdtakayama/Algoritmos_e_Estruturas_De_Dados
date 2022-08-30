#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


/* O bubble sort compara sempre o número na posição inicial com seu sucessor, se for maior eles trocam de lugar */
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tam = 5;
    int vet[tam];

    //inserir o valor do vetor
    for(int i=0; i<tam;i++){
        printf("vet[%d]:", i);
        scanf("%d" , &vet[i]);
    }

    //imprime o vetor desordenado
    printf("Vetor desordenado: \n");

    for(int i=0; i<tam;i++){
        printf("%d ", vet[i]);
    }
    printf("\n");


    int aux;


    //bubble-sort
    for(int contador = 0; contador < tam-1; contador++){
        for(int i=0; i<tam-1;i++){ //tam-1 pois o último vetor, se trocar, trocará com o /0
            if(vet[i] > vet[i+1]){
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
            }
        }
    }

    //imprime o vetor ordenado
    printf("Vetor ordenado: \n");

    for(int i=0; i<tam;i++){
        printf("%d ", vet[i]);
    }





    return 0;
}
