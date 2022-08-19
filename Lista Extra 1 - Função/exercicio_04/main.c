#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int ehprimo(int num);
int MenorOuIgual(int num);
int main()
{
    int num;
    setlocale(LC_ALL, "Portuguese");

    printf("Insira um número n: \n");
    scanf("%d" , &num);
    printf("O número primo menor ou igual a %d é %d" , num, MenorOuIgual(num));

    return 0;
}

//função que verifica se é primo ou não, se for dividido por 1 mais de 2 vezes não é primo.
int ehprimo(int num){
    int cont = 0;
    for(int i = num; i > 0; i--){
        if((num%i) == 0){
            cont++;
        }
    }
// se for primo retorna 1 e se não for retorna 0
    if(cont > 2)
        return 0;
    return 1;
}

int MenorOuIgual(int num){
    int primo;
    int i = 0;

    //enquanto i for menor que num fica no loop
    while(i <= num){
        //se o numero i for primo ele passa a ser a variável primo
        if(ehprimo(i) == 1){
            primo = i;
        }
        i++;
    }
        //retorna o primo menor ou igual ao num
        return primo;
}


