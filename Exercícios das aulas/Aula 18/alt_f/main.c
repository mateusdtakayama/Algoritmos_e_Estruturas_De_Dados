#include <stdio.h>
#include <stdlib.h>

int main()
{
    char texto[300];
    char texto2[300];
    int contador = 0;
    int ini = 0;
    printf("Insira o texto de base: \n");
    gets(texto);
    printf("Insira o texto a ser procurado: \n");
    gets(texto2);

    for(int i = 0; i < strlen(texto); i++){

        if(texto[i] == texto2[0]){

            for(int j = 1; j < strlen(texto2); j++){

                if(texto[i+j] == texto2[j]){

                    ini = i;
                    printf("A palavra %s foi encontrada no texto 1 na posicao %d. \n", texto2, ini);
                    break;

                }
            }
        }
    }



    return 0;
}



