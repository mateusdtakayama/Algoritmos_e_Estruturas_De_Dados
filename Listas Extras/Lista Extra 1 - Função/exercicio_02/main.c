#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int fatorial(int num);
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Insira o número a ser calculado o fatorial: \n");
    scanf("%d", &num);

    fatorial(num);
    printf("O fatorial do número %d é: %d" , num, fatorial(num));
    return 0;
}

int fatorial(int num){
    int fat;
    fat = 1;
    for(int i = 1; i <= num; i++){
        fat = fat * i;
    }
    if(num <= 0){
        fat = 1;
    }
return fat;
}
