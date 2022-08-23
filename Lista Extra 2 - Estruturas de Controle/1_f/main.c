#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void morse(int num);
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao,n, sobra, cont=0, var;

    printf("Da direita pra esqueda (1) ou da esquerda pra direita(2)? \n");
    scanf("%d" , &opcao);

    if(opcao == 1){

        printf("Insira um número: ");
        scanf("%d", &n);


        while (n > 0) {

            sobra = n%10;     //123, por exemplo, dividido por 10, da 12 e sobra 3, 3 = sobra
            n = n/10;       //divide o número n por 10 para fazer a conta de novo, 12/10 da 1 e sobra 2, sobra = 2
            morse(sobra);

        }
    }
    else if(opcao == 2){
        printf("Insira um número: ");
        scanf("%d", &n);
        var = n;

        //divide por 10 várias vezes para contar quantas casas decimais tem
        while(var>0){
            var = var/10;
            cont++;
        }
        while(cont > 0){
            var = n;
            var = n/(pow(10, cont-1));
            cont--;
            morse(var);
        }
    }

    else{
        printf("Número Inválido");
    }

    return 0;
}

void morse(int num){
if(num == 0){
        printf(" _ _ _ _ _ ");
    }
    if(num == 1){
        printf(". _ _ _ _ ");
    }
    if(num == 2){
        printf(". . _ _ _ ");
    }
    if(num == 3){
        printf(". . . _ _ ");
    }
    if(num == 4){
        printf(". . . . _ ");
    }
    if(num == 5){
        printf(". . . . . ");
    }
    if(num == 6){
        printf(" _ . . . . ");
    }
    if(num == 7){
        printf(" _ _ . . . ");
    }
    if(num == 8){
        printf(" _ _ _ . . ");
    }
    if(num == 9){
        printf(" _ _ _ _ . ");
    }
}
