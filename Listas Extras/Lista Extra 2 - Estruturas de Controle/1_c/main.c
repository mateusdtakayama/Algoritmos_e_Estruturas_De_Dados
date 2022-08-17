#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, m;

    printf("Insira um número n: \n");
    scanf("%d" , &n);
    printf("Insira um número m: \n");
    scanf("%d" , &m);

    for(int i = 1; i <= 200; i++){
        if(((i%n) == 0) && (((i%m)!= 0))){
            printf("%d é divisível por n e não por m. \n", i);
        }
    }

    return 0;
}
