#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, i = 1, fatorial=1;

    printf("Insira o número: \n");
    scanf("%d" , &n);
    while(i <= n){
        fatorial = fatorial * i;
        i++;
        }
    printf("O fatorial do número %d é: %d." , n, fatorial);
    return 0;

}
