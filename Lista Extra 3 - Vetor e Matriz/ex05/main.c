#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10], par = 0;

    for(int i = 0; i < 10; i++){

        printf("Insira o vetor[%d]: \n", i);
        scanf("%d" , &vet[i]);

        if(vet[i]%2 ==0 ){
            par++;
        }
   }

   printf("%d numeros pares." , par);
    return 0;
}
