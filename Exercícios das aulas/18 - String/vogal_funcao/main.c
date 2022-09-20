#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//índice
int vogal(char string[200]);
int consoante(char string[200]);
int palavras(char string[200]);

//main
int main()
{
    char string[200];

    printf("Escreva uma frase: \n");
    gets(string);
    printf("%s \n" , string);
    printf("%d vogais e %d consoantes. \n" , vogal(string), consoante(string));


    printf("%d palavras" , palavras(string));
    return 0;
}

//funcoes
int vogal(char string[200]){
    int tam;
    int vo = 0, co = 0;
    tam = strlen(string);
    for(int i=0 ; i<tam ; i++) {

        if((string[i] >= 65 && string[i] <= 90) || (string[i] >= 97 && string[i] <= 122)) {

            // contar vogais
          if(string[i] == 'a'|| string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
            vo += 1;

            }else
            co += 1;
        }
    }

return vo;
}


int consoante(char string[200]){
    int tam;
    int vo = 0, co = 0;
    tam = strlen(string);
    for(int i=0 ; i<tam ; i++) {

        if((string[i] >= 65 && string[i] <= 90) || (string[i] >= 97 && string[i] <= 122)) {

            // contar vogais
          if(string[i] == 'a'|| string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
            vo += 1;

            }else
            co += 1;
        }
    }

return co;
}

int palavras(char string[200]){
    int palavras = 0;
    int posicao = 0; //posicao que estou avaliando
    int numPalavras = 0; // num de palavras encontradas
    int tamUtil = strlen(string);

    while(posicao < tamUtil){
        while(posicao < tamUtil && string[posicao] == ' '){
            posicao++;
        }
        while(posicao < tamUtil && toupper(string[posicao]) >= 'A' &&  toupper(string[posicao]) <= 'Z'){
            posicao++;
        }
        numPalavras++;
    }
    return numPalavras;
}
