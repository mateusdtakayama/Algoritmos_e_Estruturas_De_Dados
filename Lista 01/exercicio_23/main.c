#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float alturaPessoa, alturaPredio, sombraPessoa, sombraPredio;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira a altura da pessoa em metros:\n");
    scanf("%f", &alturaPessoa);
    printf("Insira a sombra da pessoa em metros:\n");
    scanf("%f", &sombraPessoa);
    printf("Insira a sombra do pr�dio em metros:\n");
    scanf("%f", &sombraPredio);
    sombraPredio = (sombraPredio*alturaPessoa)/alturaPessoa;
    printf("A altura do pr�dio � de: %.1f metros \n" , sombraPredio);
    return 0;
}
