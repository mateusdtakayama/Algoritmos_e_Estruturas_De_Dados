#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetorA[20], menor7=0, par=0, impar=0, maior50=0;

    for(int i = 0; i < 10; i++)
    {
        printf("Insira o valor do vetorA[%d]: \n", i);
        scanf("%d", &vetorA[i]);
        if(vetorA[i]%2 == 0)
        {
            par += 1;
        }
        if (vetorA[i]%2 != 0)
        {
            impar += 1;
        }
        if (vetorA[i] < 7)
        {
            menor7 += 1;
        }
        if (vetorA[i] > 50)
        {
            maior50 += 1;
        }
    }
    printf("%d números são pares, %d números são ímpares.\n", par, impar);
    printf("%d números são maiores que 50 e %d números são menores que 7.", maior50, menor7);
    return 0;
}
