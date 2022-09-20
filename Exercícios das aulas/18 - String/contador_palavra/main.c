#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese")
    int i = 0;
    int n = 0;

    char texto[50];

    printf("Insira um texto de até 50 caracteres: \n");
    gets(texto);


    while(texto[i] != '\0')  //apenas enquanto o texto existir
    {
        while(texto[i] == ' ')  //pula os espaços que estão no começo do texto sem contar uma palavra
        {

            i++;
        }

        if(texto[i] != '\0')  //se o texto existir e não for mais espaços, adiciona uma palavra
        {
            n++;
            while(texto[i] != ' ' && texto[i] != '\0')  //adicionou uma palavra, então enquanto não tiver mais espaços ela pula as letras
            {
                i++;
            }
        }
    }

    printf("O texto tem %d palavras.", n);


    return 0;
}
