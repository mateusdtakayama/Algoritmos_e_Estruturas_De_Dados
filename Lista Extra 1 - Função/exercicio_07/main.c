#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int teste(int n){
    int b, k, i, constante;

    //log de n na base b quando n = 1, o menor b poss�vel � 1 e k = 0
    if(n == 1){
        return n;
    }

    //para N's diferentes de 1
    else{
        //uma vari�vel i para o for come�a com o maior n�mero n e vai diminuindo enquanto for maior que 1
        for(i = n; i > 1; i--){
            //k = 0 at� o maior k poss�vel para achar o maior k poss�vel e consequentemente o menor b poss�vel
            for(k = 0; pow(i,k) <= n; k++){
                if(pow(i,k) == n){
                    b = i;
                    constante = k;
                }
            }
        }
        printf("O maior k poss�vel � %d. \n" , constante);
        return b;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;


    do{
    printf("Insira um n�mero n: \n");
    scanf("%d" , &n);
    if(n <= 0){
        printf("O N precisa ser maior que 0. \n");
    }
    }while(n <= 0);


    printf("O menor b poss�vel � %d.", teste(n));
    return 0;
}
