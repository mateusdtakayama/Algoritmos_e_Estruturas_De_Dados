#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, entre=0, entre2=0, maior=0;
    for(int i = 0; i <20; i++){

        printf("%d. Insira um número n: \n" , i+1);
        scanf("%d" , &n);

        if((0<n && n<100)){
            entre += 1;
        }
        else if((101<=n && n<=200)){
            entre2 += 1;
        }
        else if(n>00){
            maior += 1;
        }
    }
    printf("%d números estão entre 0 e 100.\n" , entre);
    printf("%d números estão entre 101 e 200.\n" , entre2);
    printf("%d números são maiores que 200." , maior);
    return 0;
}
