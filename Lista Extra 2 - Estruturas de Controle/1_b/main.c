#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int n, m, acumuladora;
    setlocale(LC_ALL, "Portuguese");

    printf("insira o número a ser calculadora a tabuada (n>=2): \n");
    scanf("%d" , &n);
    printf("Até qual número m deve ser calculado a tabuada? (m >= 9) \n");
    scanf("%d" , &m);

    if(n>=2 && m>=9){
        for(int i = 1; i <= m; i++){
            printf("%d*%d = %d. \n" , n, i, n*i);
        }
    }
    else{
        printf("O valor de n ou de m foi inserido de maneira incorreta, tente novamente.");
    }
    return 0;
}
