#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//índice
int potencia(int a, int b);

//main
int main()
{
    int a, b, pot;
    pot = 1;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o valor de a: \n");
    scanf("%d" , &a);
    printf("Digite o valor de b: \n");
    scanf("%d" , &b);

    for(int i = 0; i <= b; i++){
    potencia(a, i);
    printf("A potencia de %d^%d é: %d.\n" , a, i, potencia(a, i));
    }
    return 0;
}

int potencia(int a, int i){
    int pot = 1;
    for(int j = 0; j < i; j++){
    pot = pot*a;
    }
return pot;
}
