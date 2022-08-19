#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fibonacci(int num);
int main()
{
    int num;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira um n�mero n: \n");
    scanf("%d" , &num);
    printf("O n�mero maior ou igual a %d na sequ�ncia de fibonacci �: %d" , num, fibonacci(num));

    return 0;
}

int fibonacci(int num){
    int fibo = 1, anterior1 = 0, anterior2 = 0;

        while(fibo < num){
                anterior2 = anterior1;
                anterior1 = fibo;
                fibo = anterior1 + anterior2;
    }
    if(fibo == num){
        return num;
    }
    else
        return (anterior1 + anterior2);
}
