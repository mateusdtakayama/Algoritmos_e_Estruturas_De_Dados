#include <stdio.h>
#include <stdlib.h>

int teste(int num){
    if(num > 0){
        for(int i = 1; i <= num; i++){
                for(int j = 1; j <= num; j++){

                    if((i*j) == num){
                        printf("%d*%d = %d. \n" , i, j, num);
                        printf("%d*%d = %d. \n" , -i, -j, num);
                    }
                }
        }
    }
    if(num < 0){
        for(int i = 1; i >= num ; i--){
                for(int j = 1; j >= num ; j--){

                        if((i*j) == num){

                        printf("%d*%d = %d. \n" , i, j, num);
                        printf("%d*%d = %d. \n" , -i, -j, num);

                        }

                }
        }
    }
}
int main()
{
    int num;

    printf("Digite um numero n: \n");
    scanf("%d" , &num);
    teste(num);


    return 0;
}
