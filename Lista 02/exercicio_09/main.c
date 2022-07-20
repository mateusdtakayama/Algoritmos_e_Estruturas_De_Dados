#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int num, n1, n2, n3, media;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o número de identificação do aluno: \n");
    scanf("%d" , &num);
    printf("Insira a nota 1: \n");
    scanf("%d" , &n1);
    printf("Insira a nota 2: \n");
    scanf("%d" , &n2);
    printf("Insira a nota 3: \n");
    scanf("%d" , &n3);

    media = (n1+n2+n3)/3;
    printf("A média do aluno cuja indentificação é %d foi de: %d \n" , num, media);

    if(media>=70)
        printf("Aprovado \n");
    else if(40<=num<70)
        printf("Recuperação \n");
    else
        printf("Reprovado \n");
    return 0;
}
