#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[10], min, aux;

    for(int i = 0; i < 10; i++)
    {
        printf("Qual o valor do vetor %d.", i);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        //coloca o mínomo colo i = 0;
        min = i;

        //for para definir qual número no vetor é menor que o vetor[0], se tiver algum menor
        //eles trocam de posição
        for(int j = 0; j < 10; j++)
        {
            if(vetor[min] > vetor[j])
            {
                min = j;
            }
            aux = vetor[i];
            vetor[min] = vetor[i];
            vetor[i] = aux;

        }

    }
    printf("Vetor: ");
    for(int i = 0; i < 10; i++)
    {
        printf("%d  ", vetor[i]);
    }
    return 0;
}
