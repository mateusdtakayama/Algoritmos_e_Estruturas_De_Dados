#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int ehprimo(int num);
int MenorOuIgual(int num);
int main()
{
    int num;
    setlocale(LC_ALL, "Portuguese");

    printf("Insira um n�mero n: \n");
    scanf("%d" , &num);
    printf("O n�mero primo menor ou igual a %d � %d" , num, MenorOuIgual(num));

    return 0;
}

//fun��o que verifica se � primo ou n�o, se for dividido por 1 mais de 2 vezes n�o � primo.
int ehprimo(int num){
    int cont = 0;
    for(int i = num; i > 0; i--){
        if((num%i) == 0){
            cont++;
        }
    }
// se for primo retorna 1 e se n�o for retorna 0
    if(cont > 2)
        return 0;
    return 1;
}

int MenorOuIgual(int num){
    int primo;
    int i = 0;

    //enquanto i for menor que num fica no loop
    while(i <= num){
        //se o numero i for primo ele passa a ser a vari�vel primo
        if(ehprimo(i) == 1){
            primo = i;
        }
        i++;
    }
        //retorna o primo menor ou igual ao num
        return primo;
}


