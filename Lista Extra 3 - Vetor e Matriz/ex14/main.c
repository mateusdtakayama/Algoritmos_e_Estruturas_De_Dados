#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[10];

    preencher(vetor);

    imprimir(vetor);



    return 0;
}

void preencher(int vetor[]){

    for(int i=0;i<10;i++){
        printf("Insira um valor para o vetor[%d]: \n" , i+1);
        scanf("%d" , &vetor[i]);
    }
}

void imprimir(int vetor[]){

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(vetor[i] == vetor[j]){
                printf("O vetor[%d] é igual ao vetor[%d], que é %d. \n", i, j, vetor[i]);
            }
        }
    }
}
