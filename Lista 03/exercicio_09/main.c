#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, maior=0;
    for(int i = 0; i <20; i++){

        printf("%d. Insira um n�mero n: \n" , i+1);
        scanf("%d" , &n);

        if(n > 8){
            maior = maior +1;
        }
    }
    printf("%d n�meros s�o maiores que 8." , maior);
    return 0;
}
