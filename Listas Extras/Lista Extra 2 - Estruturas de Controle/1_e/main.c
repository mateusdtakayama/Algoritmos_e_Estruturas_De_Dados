#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int num;
    setlocale(LC_ALL, "Portuguese");

    printf("Insira um número: \n");
    scanf("%d" , &num);


    if(num == 0){
        printf(" _ _ _ _ _");
    }
    if(num == 1){
        printf(". _ _ _ _");
    }
    if(num == 2){
        printf(". . _ _ _");
    }
    if(num == 3){
        printf(". . . _ _");
    }
    if(num == 4){
        printf(". . . . _");
    }
    if(num == 5){
        printf(". . . . .");
    }
    if(num == 6){
        printf(" _ . . . .");
    }
    if(num == 7){
        printf(" _ _ . . .");
    }
    if(num == 8){
        printf(" _ _ _ . .");
    }
    if(num == 9){
        printf(" _ _ _ _ .");
    }
    if(num == 10){
        printf(".----  -----");
    }

    return 0;
}
