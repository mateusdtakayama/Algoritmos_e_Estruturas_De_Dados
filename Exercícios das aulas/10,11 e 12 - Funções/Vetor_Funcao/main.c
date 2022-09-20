// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// protótipos das funções
void preencher(int vetor[], int tam);
void printar(int vetor[], int tam);
void zerar(int vetor[], int tam);
int menor(int vetor[] , int tam);
int maior(int vetor[] , int tam);
double media(int vetor[] , int tam);


// variáveis globais


// main
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tam = 10;
    int vetor[tam];

    //preencher os vetores de 0-9 com valores
    preencher(vetor, tam);
    //printa os valores colocados
    printar(vetor, tam);

    printf("O maior dos vetores é: %d\n" , maior(vetor, tam));
    printf("O menor dos vetores é: %d\n" , menor(vetor, tam));
    printf("A média dos vetores é: %.2lf\n" , media(vetor, tam));

    //zera de 0-9 os vetores
    zerar(vetor, tam);
    printf("\n");
    //printa os vetores zerados
    printar(vetor, tam);

    return 0;
}

void preencher(int vetor[], int tam) {

    for(int i = 0; i < tam; i++) {
        printf("Vetor[%d] vai ser: \n", i);
        scanf("%d", &vetor[i]);
    }
}

void printar(int vetor[], int tam) {

    for(int i = 0; i < tam; i++) {
        printf("Vetor[%d] vai ser: %d.\n", i, vetor[i]);
    }
}

void zerar(int vetor[], int tam) {
    for(int i = 0; i < tam; i++) {
        vetor[i] = 0;
    }
}

int menor(int vetor[] , int tam) {
    int menor;
    menor = vetor[0];

    for(int i = 1; i < tam; i++){
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    return menor;
}

int maior(int vetor[] , int tam) {
    int maior;
    maior = vetor[0];

    for(int i = 1; i < tam; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
   return maior;
}

double media(int vetor[] , int tam) {
    int soma = 0;
    for(int i = 0 ; i < 10; i++){
        soma = soma + vetor[i];
    }
    return (double)soma/tam;
}




