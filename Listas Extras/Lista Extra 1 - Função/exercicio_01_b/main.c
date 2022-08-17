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
    for (int a = 1; a < 10; a++)
    {
        for(int i = 1; i <= 10; i++)
        {
            potencia(a, i);
            printf("A potencia de %d^%d é: %d.\n", a, i, potencia(a, i));
        }
    printf("\n");
    }
    return 0;
}

int potencia(int a, int i)
{
    int pot = 1;
    for(int j = 0; j < i; j++)
    {
        pot = pot*a;
    }
    return pot;
}
