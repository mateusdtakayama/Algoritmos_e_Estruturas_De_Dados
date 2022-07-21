#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetorA[10], vetorB[10], vetorC[10];

    for(int i = 0; i < 10; i++){
        printf("Insira o valor do vetorA[%d]: \n" , i);
        scanf("%d" , &vetorA[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("Insira o valor do vetorB[%d]: \n" , i);
        scanf("%d" , &vetorB[i]);
    }
    for(int i = 0; i < 10; i++){
        vetorC[i]= vetorA[i]+vetorB[i];
        printf("vetorC[%d] = %d. \n" , i, vetorC[i]);
    }
    return 0;
}
