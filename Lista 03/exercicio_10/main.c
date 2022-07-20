#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, pares=0;
    for(int i = 0; i <20; i++){

        printf("%d. Insira um número n: \n" , i+1);
        scanf("%d" , &n);

        if((n%2)==0){
            pares = pares +1;
        }
    }
    printf("%d números são pares." , pares);
    return 0;
}
