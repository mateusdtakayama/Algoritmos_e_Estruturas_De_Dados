#include <stdio.h>
#include <stdlib.h>

int main()
{

    double a, b;
    printf("Digite o valor de a:\n");
    scanf("%lf" ,&a);
    printf("Digite o valor de b:\n");
    scanf("%lf" ,&b);

    double soma, multiplicacao, divisao;

    soma = a+b;
    printf("\nA soma eh de %0.3lf" , soma);
    divisao= a/b;
    printf("\nA divisao eh de %0.3lf" , divisao);
    multiplicacao = a*b;
    printf("\nA multiplicacao eh de %0.3lf" , multiplicacao);
    return 0;
}
