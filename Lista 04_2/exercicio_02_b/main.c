#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
long long int fatorial(num);
int main()
{
    setlocale(LC_ALL, "Portuguese");
    for(int num = 0; num <= 20; num++){
    fatorial(num);
    printf("O fatorial do número %d é: %d.\n" , num, fatorial(num));
    }
    return 0;
}

long long int fatorial(int num){
    long long int fat;
    fat = 1;
    for(int i = 1; i <= num; i++){
        fat = fat * i;
    }
    if(num <= 0){
        fat = 1;
    }
return fat;
}
