#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetorR[5], vetorS[10],vetorX[5], acumuladora = 0;


    for(int i = 0; i < 5; i++)
    {
        printf("Insira o valor do vetorR[%d]: \n", i);
        scanf("%d", &vetorR[i]);

    }
    for(int i = 0; i < 10; i++)
    {
        printf("Insira o valor do vetorS[%d]: \n", i);
        scanf("%d", &vetorS[i]);
    }

    for(int i = 0; i < 5; i++)
    {

        for(int j = 0; j < 10; j++)
        {
            if(vetorR[i] == vetorS[j])
            {
                vetorX[i] = vetorR[i];
                printf("o vetorR[%d] é igual ao vetorS[%d] que é: %d.\n", i, j, vetorR[i]);
                acumuladora += 1;
            }
        }
    }
    for (int i=0; i < acumuladora; i++){
        printf("VetorX[%d]: %d. \n" , i, vetorX[i]);
    }
    return 0;
}
