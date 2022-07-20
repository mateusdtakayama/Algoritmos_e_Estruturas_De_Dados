#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    char s;
    float alt;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite 'm' se for mulher e 'h' se for homem: \n");
    scanf("%c", &s);
    printf("Insira a altura em metros: \n");
    scanf("%f", &alt);
    if(s == 'm')
        printf("O seu peso ideal é de: %.1f quilos",  (62.1 * alt) - 44.7);
    else if (s == 'h')
        printf("O seu ideal é de: %.1f quilos",  (72.7 * alt) - 58);
    else
        printf("Opção inválida");


    return 0;
}
