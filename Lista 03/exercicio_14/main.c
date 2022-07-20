#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char resposta;
    int i=0;

    printf("Olá, tudo bem? (s/n) \n");
    scanf("%c" , &resposta);
    fflush(stdin);
    while(i == 0){
        if(resposta == 's'){
            i++;
        }
        else if(resposta == 'n'){
            printf("Olá, tudo bem? (s/n) \n");
            scanf("%c" , &resposta);
            fflush(stdin);
        }
        else{
            printf("Não, entendi. Você está bem? (s/n) \n");
            scanf("%c" , &resposta);
            fflush(stdin);
        }
    }

    return 0;

}
