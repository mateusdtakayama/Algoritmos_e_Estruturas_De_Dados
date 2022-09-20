#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct Pessoa{
    int rg;
    char nome[80];
};

int tamanho();
void preencher(int tam, struct Pessoa cadastro[tam]);
void ordenador(int tam, struct Pessoa cadastro[tam]);
int pergunta();
int buscabinaria(int rg, int tam, struct Pessoa cadastro[tam]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tam, rg;

    //inserção do tam
    tam = tamanho();


    struct Pessoa cadastro[tam];

    //preencher os dados
    preencher(tam, cadastro);


    //ordenar por RG
    ordenador(tam, cadastro);


    //qual deseja procurar
    rg = pergunta();

    //buscabinaria
    buscabinaria(rg, tam, cadastro);


    return 0;
}

int tamanho(){
    int tam;

    printf("Insira quantas pessoas serão cadastradas: \n");
    scanf("%d" , &tam);

    return tam;
}

void preencher(int tam, struct Pessoa cadastro[tam]){

    for(int i=0;i<tam;i++){

            fflush(stdin);
            printf("Insira o rg %d: \n" , i+1);
            scanf("%d" , &cadastro[i].rg);
            fflush(stdin);
            printf("Insira o nome %d: \n", i+1);
            gets(cadastro[i].nome);
    }

}

void ordenador(int tam, struct Pessoa cadastro[tam]){

    int menor;
    struct Pessoa aux;

    for(int i=0; i<tam;i++){
        menor = i;
        for(int j=i+1;j<tam;j++){
            if(cadastro[menor].rg > cadastro[j].rg){
                aux = cadastro[menor];
                cadastro[menor] = cadastro[j];
                cadastro[j] = aux;
            }
        }
    }
}
int pergunta(){

    int rg;
    printf("Qual RG deseja procurar? \n");
    scanf("%d" , &rg);

    return rg;
}


int buscabinaria(int rg, int tam, struct Pessoa cadastro[tam]){

    int esq = 0;
    int dir = tam-1;
    int meio;

    while(esq <= dir){
        meio=((esq+dir)/2);
        if(cadastro[meio].rg == rg){
            printf("Encontrei o rg %d na posicao %d", cadastro[meio].rg, meio);
            return 1;

        }else if(cadastro[meio].rg < rg){
            esq = meio +1;

        }else if(cadastro[meio].rg > rg){
            dir = meio - 1;
        }
    }
    return 0;
}


