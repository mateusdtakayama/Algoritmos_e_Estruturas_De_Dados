#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int soma = 0;
    int n;
    for(int i=1; i <= 10; i++){
    printf("Insira o número %d: \n", i);
    scanf("%d" , &n);
    soma = soma + n;
    }
    printf("A soma de todos os números é %d." , soma);

    return 0;
}
