#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Insira um n�mero �mpar maior que 3: \n");
    scanf("%d" , &num);
    if((num%2 != 0) && num >= 3){
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num; j++){
            if(i == j){
                printf("*" , i, j);
            }
            else if(i+j == num+1){
                printf("*" , i, j);
            }
            else{
                printf(" ");
            }

        }
        printf("\n");
    }
    }
    else{
        printf("O n�mero inserido n�o � �mpar ou n�o � maior que 3.");
    }
    return 0;
}
