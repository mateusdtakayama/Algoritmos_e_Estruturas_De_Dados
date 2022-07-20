#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int l1, l2, l3, n;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o valor do lado 1: \n");
    scanf("%d" , &l1);
    printf("Insira o valor do lado 2: \n");
    scanf("%d" , &l2);
    printf("Insira o valor do lado 3: \n");
    scanf("%d" , &l3);

    if((l1 < l2+l3) && (l2 < l1+l3) && (l3 < l1 + l3)){
         if((l1 == l2 && l2 == l3))
            printf("O triângulo é Equilátero.");

        else if ((l1 == l2) || (l2 == l3) || (l1 == l3))
            printf("O triângulo é Isósceles.");

        else
            printf("O triângulo é Escaleno.");
    }else
        printf("Os valores inseridos não podem resultar em um triângulo");

    return 0;
}
