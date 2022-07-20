#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3;

    printf("Insira o primeiro número: \n");
    scanf("%d" , &n1);
    printf("Insira o segundo número: \n");
    scanf("%d" , &n2);
    printf("Insira o terceiro número: \n");
    scanf("%d" , &n3);

    if((n1 >= n2) && (n1 >= n3)){
        printf("O maior número é o: %d \n" , n1);
    }else
        if((n2>=n1) && (n2>=n3)){
            printf("O maior número é o: %d \n" , n2);

            }else{
                if((n3>= n1) && (n3>=n1)){
                printf("O maior número é o: %d \n" , n3);
                }
            }


    return 0;
}
