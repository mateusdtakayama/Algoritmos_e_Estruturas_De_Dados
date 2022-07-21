#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetorA[10], vetorB[10], acumuladora = 0;
    int j = 0;
    for(int i = 0; i < 10; i++)
    {
        printf("Insira o valor do vetor A [%d]: \n", i);
        scanf("%d", &vetorA[i]);
    }
    for(int i=0; i < 10; i++)
    {
        if(vetorA[i] > 0)
        {
            vetorB[j] = vetorA[i];
            acumuladora += 1;
            j++;
        }
    }

    for(int j = 0; j < acumuladora; j++)
    {
        printf("VetorB[%d]= %d. \n", j, vetorB[j]);
    }

    return 0;
}
