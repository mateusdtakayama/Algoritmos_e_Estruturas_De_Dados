#include <stdio.h>
#include <stdlib.h>


/*Selection Sort =
Seleciona quem é o menor da lista e o coloca como primeiro depois disso
seleciona quem é o segundo menor da lista e o coloca como segundo e assim por diante
...

Ele compara a posição atual do vetor, colocando ela como a menor e comparando com o resto do vetor,
ate conseguir encontrar um valor menor do que o da posição atual.
*/
int main()
{

    int vet[]={5,10,11,1,3,4};

    int minimo=vet[0];


    //1- localiza o menor valor
    for(int i=0; i<6;i++){
        if(minimo > vet[i]){
            minimo = vet[i];
        }
    }
    printf("%d, menor valor \n", minimo);


    int min;
    min=0;

    //2- encontrar a posicao do valor minimo
    for(int i=0; i<6 ;i++){
        if(vet[i] < vet[min]){
            min = i;
        }
    }
    printf("%d, local onde esta o menor = %d. \n" , min, vet[min]);


    //3- selection sort

    int aux;
    for(int i=0; i<6; i++){ //for que anda nas posicoes do vetor

        min = i; //o valor mínimo tem sempre que ser o primeiro a ser analisado e depois comparado com os próximos

        for(int j=i; j<6;j++){ //encontra o valor mínimo a partir de 0, depois de 1, depois de 2
            if(vet[j] < vet[min]){
                min = j;
            }
        }
        if(vet[i] > vet[min]){ //se o valor que estiver em 0 for maior que o minimo, eles trocam
            aux = vet[i];
            vet[i] = vet[min];
            vet[min] = aux;
        }
    }

    //imprimir o vetor

    printf("vetor ordenado: ");

    for(int i=0; i<6;i++){
        printf("%d  ", vet[i]);
    }

    return 0;
}
