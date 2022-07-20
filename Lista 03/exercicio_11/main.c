#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, entre=0;
    for(int i = 0; i <20; i++){

        printf("%d. Insira um número n: \n" , i+1);
        scanf("%d" , &n);

        if((0<=n && n<=100)){
            entre += 1;
        }
    }
    printf("%d números estão entre 0 e 100." , entre);
    return 0;
}
