#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float pesoKilo, pesoGrama;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o peso inicial em quilos:\n");
    scanf("%f", &pesoKilo);
    pesoGrama = pesoKilo * 1000;
    printf("O peso é de: %0.2f gramas \n", pesoGrama);
    return 0;
}
