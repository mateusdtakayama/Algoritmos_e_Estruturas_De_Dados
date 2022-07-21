#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetorA[10];
    int maior, menor;

    printf("Insira o valor do vetorA[0]: \n");
    scanf("%d" , &vetorA[0]);
    menor = vetorA[0];
    maior = vetorA[0];

    for(int i = 1; i < 10; i++){
        printf("Insira o valor do vetorA[%d]: \n" , i);
        scanf("%d" , &vetorA[i]);

        if(vetorA[i] < menor){
            menor = vetorA[i];
        }
        if(vetorA[i] > maior){
            menor = vetorA[i];
        }

    }
    printf("A maior idade é %d. \n" , maior);
    printf("A menor idade é %d. \n" , menor);

    return 0;
}
