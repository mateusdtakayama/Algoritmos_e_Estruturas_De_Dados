#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, m;

    printf("Insira um n�mero n: \n");
    scanf("%d" , &n);
    printf("Insira um n�mero m: \n");
    scanf("%d" , &m);

    for(int i = 1; i <= 200; i++){
        if(((i%n) == 0) && (((i%m)!= 0))){
            printf("%d � divis�vel por n e n�o por m. \n", i);
        }
    }

    return 0;
}
