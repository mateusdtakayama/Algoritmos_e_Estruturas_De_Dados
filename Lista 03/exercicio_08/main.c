#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int IdadeMenor = 500;
    int n;
    char nome[50];
    char nomeMenor[50];

    for(int i=1; i <= 10; i++)
    {
        printf("Insira o nome da pessoa %d: \n", i);
        scanf("%s", nome);
        printf("Insira a idade %d: \n", i);
        scanf("%d", &n);

        if(n < IdadeMenor){
            IdadeMenor = n;
            strcpy(nomeMenor, nome);
            printf("%s", nomeMenor);
        }
    }
    printf("%s, com %d anos, é a pessoa mais nova." , nomeMenor ,IdadeMenor);

    return 0;
}
