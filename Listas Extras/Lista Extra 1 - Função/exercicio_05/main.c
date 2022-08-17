#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float raiz(int num);

int main()
{
    setlocale(LC_ALL , "Portuguese");
    float num;
    printf("Insira um número n: \n");
    scanf("%f" , &num);
    printf("A raiz de %.2f é %.2f .", num, raiz(num));
    return 0;
}

float raiz(int num){
    return pow(num, 0.5);
}
