#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][2];

    for(int i = 0; i < 3; i++){
        for(int j = 0;j < 3; j++){
            if(i == j){
                a[i][j] = 1;
            }
            else{
                a[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0;j < 3; j++){
            if((i+j) == 2){
                b[i][j] = 1;
            }
            else
                b[i][j] = 0;
        }
    }

    printf("  Matriz A\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("[%d] " , a[i][j]);
        }
            printf("\n");
    }
    printf("  Matriz B \n");
    for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){

                printf("[%d] " , b[i][j]);
            }
                printf("\n");
    }

    for(int i = 1; i <= 3; i++){
        for(int j = 1;j <= 2; j++){
            if(i == j){
                c[i][j] = 1;
            }
            else
                c[i][j] = (i*i);
        }
    }

    printf("  Matriz C \n");
    for(int i = 1; i <= 3; i++){
            for(int j = 1; j <= 2; j++){

                printf("[%d] " , c[i][j]);
            }
                printf("\n");
    }
    return 0;
}
