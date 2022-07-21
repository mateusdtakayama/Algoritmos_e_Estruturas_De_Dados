#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetorA[5], vetorB[10], acumuladora = 0;

    for(int i = 0; i < 5; i++){
        printf("Insira o valor do vetor Gabarito[%d]: \n" , i);
        scanf("%d" , &vetorA[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("Insira o valor do vetor que será da aposta [%d]: \n" , i);
        scanf("%d" , &vetorB[i]);
    }
    for(int i = 0; i < 5 ; i++){

        for(int j = 0; j < 10; j++){
            if(vetorA[i] == vetorB[j]){
                acumuladora += 1;
            }
        }
    }
        printf("Parabéns, você fez %d pontos!!", acumuladora);
    return 0;
}
