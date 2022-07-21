#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor1[10], vetor2[10], vetor3[10];

    for(int i = 0; i < 10; i++){
        printf("Insira o valor do vetor1[%d]: \n" , i);
        scanf("%d" , &vetor1[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("Insira o valor do vetor2[%d]: \n" , i);
        scanf("%d" , &vetor2[i]);
    }
    for(int i = 0; i < 10; i++){
        vetor3[i]= vetor1[i]+vetor2[i];
        printf("vetor3[%d] = %d. \n" , i, vetor3[i]);
    }
    return 0;
}
