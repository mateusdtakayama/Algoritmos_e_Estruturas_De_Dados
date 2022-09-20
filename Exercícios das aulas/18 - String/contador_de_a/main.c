#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char str[50];
    int contador = 0;


    printf("Insira um texto para procurar quantas letras A há no texto: \n");
    gets(str);

    for(int i = 0; i <= strlen(str); i++){
        if(str[i] == 'a'){
            contador++;
        }

    }

    printf("%d", contador);


    return 0;
}
