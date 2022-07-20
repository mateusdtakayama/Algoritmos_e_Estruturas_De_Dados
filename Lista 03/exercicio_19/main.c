#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int altura,menor=500, maior=0, i=0;

    while(i < 15){
    printf("Insira altura da pessoa %d em centimetros: \n" , i+1);
    scanf("%d" , &altura);
    if(altura < menor)
        menor = altura;
    else if(altura > maior)
        maior = altura;
    i++;
    }
    printf("A maior altura é de: %d centímetros.\n" , maior);
    printf("A menor altura é de: %d centímetros." , menor);
    return 0;

}
