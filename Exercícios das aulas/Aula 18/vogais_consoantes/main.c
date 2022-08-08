#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string[200];
    int tam;
    int vo = 0, co = 0;
    printf("Escreva seu nome: \n");
    gets(string);
    tam = strlen(string);
    printf("%s \n" , string);

    for(int i=0 ; i<tam ; i++) {

        if((string[i] >= 65 && string[i] <= 90) || (string[i] >= 97 && string[i] <= 122)) {

            // contar vogais
          if(string[i] == 'a'|| string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
            vo += 1;

            }else
            co += 1;
        }
    }
    printf("tamanho: %d \n" , tam);
    printf("%d vogais e %d consoantes." , vo, co);
    return 0;
}
