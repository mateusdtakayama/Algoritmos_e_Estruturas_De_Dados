#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void transformador(char string[], int tam, char cebolinha[]);
void lestring(char string[]);
void teste(char x[], int tam);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char string[200], cebolinha[200];
    int tam;

    //pega a string
    lestring(string);

    //tamanho da string
    tam = strlen(string);


    //transforma a string na 'lingua'
    transformador(string, tam, cebolinha);

    printf("%s", cebolinha);
    return 0;
}

void lestring(char string[]){
    printf("Escreva uma frase a ser convertida para 'linguagem' do Cebolinha: \n");
    gets(string);
}

void transformador(char string[], int tam, char cebolinha[]){

    int j=0;
    for(int i=0; i<=tam;i++, j++) {
        if(string[i] == 'r' && string[i+1] == 'r' || string[i] == 'r' && string[i+1] == 'l') {
            cebolinha[j] = 'l';
            i++;
        }
        else if(string[i] == 'r' && string[i+1] != ' ' && string[i+1] != '\0' && string[i+1] != '.' && string[i+1] != ','){
            cebolinha[j] = 'l';
        }
        else{
            cebolinha[j] = string[i];
        }
    }
}


