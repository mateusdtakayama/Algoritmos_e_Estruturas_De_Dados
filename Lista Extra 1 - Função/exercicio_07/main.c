#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int teste(int n){
    int b, k, i, constante;

    //log de n na base b quando n = 1, o menor b possível é 1 e k = 0
    if(n == 1){
        return n;
    }

    //para N's diferentes de 1
    else{
        //uma variável i para o for começa com o maior número n e vai diminuindo enquanto for maior que 1
        for(i = n; i > 1; i--){
            //k = 0 até o maior k possível para achar o maior k possível e consequentemente o menor b possível
            for(k = 0; pow(i,k) <= n; k++){
                if(pow(i,k) == n){
                    b = i;
                    constante = k;
                }
            }
        }
        printf("O maior k possível é %d. \n" , constante);
        return b;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;


    do{
    printf("Insira um número n: \n");
    scanf("%d" , &n);
    if(n <= 0){
        printf("O N precisa ser maior que 0. \n");
    }
    }while(n <= 0);


    printf("O menor b possível é %d.", teste(n));
    return 0;
}
