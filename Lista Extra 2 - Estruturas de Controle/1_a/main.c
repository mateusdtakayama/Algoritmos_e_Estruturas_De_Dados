#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3, maior;

    printf("Insira o n1: \n");
    scanf("%d" , &n1);
    printf("Insira o n2: \n");
    scanf("%d" , &n2);
    printf("Insira o n3: \n");
    scanf("%d" , &n3);

    maior = n1;

    if(n2 >= maior){
        maior = n2;
    }

    if(n3 >= maior){
        maior = n3;
    }

    printf("O maior número inserido foi: %d." , maior);
    return 0;
}
