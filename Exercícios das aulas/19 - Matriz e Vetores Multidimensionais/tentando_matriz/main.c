#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Insira o tamanho da matriz quadrada n. \n");
    scanf("%d" ,&n);
    int matriz[n][n];
    int dp = 0;
    int ds = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Insira o valor de a(%d)(%d): \n" , i, j);
            scanf("%d" , &matriz[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
            dp = dp + matriz[i][j];
            }
            if((i+j) == (n-1)){
            ds = ds + matriz[i][j];
            }
            printf("[%d] " , matriz[i][j]);
        }
            printf("\n");
    }

    printf("A soma da diagonal principal eh: %d. \n" , dp);
    printf("A soma da diagonal secundaria eh: %d." , ds);




    return 0;
}
