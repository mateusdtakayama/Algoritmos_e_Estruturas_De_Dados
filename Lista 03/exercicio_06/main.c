#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int soma = 0;
    int n;
    for(int i=1; i <= 20; i++){
    printf("Insira a idade da pessoa %d: \n", i);
    scanf("%d" , &n);
    soma = soma + n;
    }
    printf("A média das idades é %d." , (soma/20));

    return 0;
}
