#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10];
    int MAX=10;
    int i, j, aux;

    for(int i=0; i<10;i++){
        printf("vet[%d]: ", i);
        scanf("%d" , &vet[i]);
    }

    printf("\n");


    for(i = 1; i < MAX; i++){

        //auxiliar pega o valor da posição i
        aux = vet[i];

        //j assume o valor da posicao anterior a i
        // enquanto i-1 for maior que 0 e enquanto i-1 for maior que i (e decrescendo i-1)
        for(j = i-1; j >= 0 && aux < vet[j]; j--){

            //troca i por sua posição anterior
            vet[j+1] = vet[j];
            }
        //coloca o vet[i] no local correto
        vet[j+1] = aux;
    }

    for(int i=0; i<10;i++){
        printf("%d ", vet[i]);
    }

    return 0;
}
