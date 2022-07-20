#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, media, n=0, i=0;

    printf("Insira a quantidade de alunos: \n");
    scanf("%d" , &n);
    while(i < n){
    printf("Insira a nota 1 do aluno %d (0-100): \n" , i+1);
    scanf("%d" , &n1);
    printf("Insira a nota 2 do aluno %d (0-100): \n" , i+1);
    scanf("%d" , &n2);
    media = (n1+n2)/2;
    if(media>60){
        printf("*************************************\n");
        printf("O aluno %d com média %d, foi APROVADO.\n", i+1, media);
        printf("*************************************\n");


    } else{
        printf("**************************************\n");
        printf("O aluno %d com média %d, foi REPROVADO.\n", i+1, media);
        printf("**************************************\n");
    }
    i++;
    }



    return 0;

}
