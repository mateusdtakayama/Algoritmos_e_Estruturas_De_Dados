#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3, maior = 0;

          int num1, num2, num3;
    printf("Insira o valor do primeiro numero: \n");
    scanf("%d" , &num1);
    printf("Insira o valor do segundo numero: \n");
    scanf("%d" , &num2);
    printf("Insira o valor do terceiro numero: \n");
    scanf("%d" , &num3);

    if(num1 >= num2 && num1 >= num3){
        printf("O maior numero é o: %d\n" , num1);
        return 0;
    }

    if(num2 >= num1 && num2 >= num3){
        printf("O maior numero é o: %d\n" , num2);
        return 0;
    }

    if(num3 >= num2 && num3 >= num1){
        printf("O maior numero é o: %d\n" , num3);
        return 0;
    }
    return 0;
}
