#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float valorInicial, valorFinal;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o valor do produto:\n");
    scanf("%f" , &valorInicial);
    valorFinal = valorInicial - valorInicial*0.10;
    printf("o valor final do produto é: %0.2f" , valorFinal);
    return 0;
}
