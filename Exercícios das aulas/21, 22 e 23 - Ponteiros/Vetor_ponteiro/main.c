#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam, *vet;

    printf("TAM: ");
    scanf("%d" , &tam);

    //aloca o vetor de int de tamanho igual a tam
    vet = malloc (tam * sizeof(int));

    //se der prolema retorna 1
    if(vet == NULL){
        printf("Erro! \n");
        return 1;
    }
    //preenche
    for(int i=0; i<tam; i++){
        vet[i] = i;
    }

    //imprime
    for(int i=0; i<tam; i++){
        printf("vet[%d] = %d. \n", i, vet[i]);
    }

    //libera memoria
    free(vet);
    return 0;
}
