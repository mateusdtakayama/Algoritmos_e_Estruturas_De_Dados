#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float vetorA[10], soma = 0, acumedia = 0, quantia = 0, media = 0;

    for(int i = 0; i < 10; i++){
        printf("Insira o valor do vetorA[%d]: \n" , i);
        scanf("%f" , &vetorA[i]);

        if(vetorA[i] < 15){
            soma = soma + vetorA[i];
        }
        if(vetorA[i] == 15){
            quantia += 1;
        }
        if(vetorA[i] > 15){
            acumedia = acumedia + 1;
            media = vetorA[i] + media;
        }

    }

    if(acumedia == 0){
        acumedia = 1;
    }

        printf("A soma dos n�meros menores que 15 � %.0f\n" , soma);
        printf("Existem %.0f n�meros iguais a 15.\n" , quantia);
        printf("A m�dia dos n�meros maiores que 15 � %.2f." , media/acumedia);

        return 0;
}
