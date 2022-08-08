#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetorA[10], aux, min;
    int j = 0;
    int i = 0;

    //obtendo os dados do vetor
    for(int i = 0; i < 10; i++)
    {
        printf("Insira o valor do vetor A [%d]: \n", i);
        scanf("%d", &vetorA[i]);
    }

    //ordena os valores do vetor
    for(int i = 0; i < 10; i++)
    {
        //min começa em 0
        min = i;

        for(int j = i + 1; j < 10; j++)
        {
            //se o vetor que começa em 0 for maior que algum do j (0-10), o min passa a ser o j.
            if(vetorA[min] > vetorA[j])
            {
                min = j;
            }
            //troca de lugar vetor i(0) com o vetor mínimo achado
            aux = vetorA[i];
            vetorA[i] = vetorA[min];
            vetorA[min] = aux;
        }
    }



    printf("Vetor Ordenado: ");
    do
    {
        if(i < 9)
        {
            printf("%d, ", vetorA[i]);
            i++;
        }
        else{
            printf("%d.", vetorA[i]);
            i++;
        }



    }
    while(i < 10);

    return 0;
}
