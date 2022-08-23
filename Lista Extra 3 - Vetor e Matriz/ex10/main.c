#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vet[15], acumuladora = 0;

    for(int i = 0; i < 15; i++){

        printf("Insira o valor para o vetor[%d]: \n" , i);
        scanf("%d", &vet[i]);
        acumuladora = acumuladora + vet[i];
    }

    printf("A média da turma foi: %d." , acumuladora/15);
    return 0;
}
