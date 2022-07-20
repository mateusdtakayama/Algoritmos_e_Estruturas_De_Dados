#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, n1, n2, soma = 0;
    printf("Insira o número 1: \n");
    scanf("%d", &n1);
    printf("Insira o número 2: \n");
    scanf("%d", &n2);
    i = n1;
    while(i <= n2)
    {
        soma = soma + i;
        i++;
    }

    printf("A soma dos números de %d até %d é: %d", n1, n2, soma);

    return 0;
}
