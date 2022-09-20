#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N 5


struct livro {

    char nome[50];
    int ano;
    int valido;
};


void iniciaBiblioteca(struct livro b[] , int n);
void cadastrarlivros(struct livro b[], int n);
void imprimeBib(struct livro b[], int n);

int main()
{
    setlocale(LC_ALL, "Portuguese"); //portugues

    struct livro biblioteca[N];
    //garante que a biblioteca está sem nenhum livro
    iniciaBiblioteca(biblioteca, N);

    //cadastra os livros
    cadastrarlivros(biblioteca, N);

    printf("A biblioteca contém os seguintes livros: \n");

    //imprime os livros
    imprimeBib(biblioteca, N);

    return 0;
}

void iniciaBiblioteca(struct livro b[] , int n){

    for(int i = 0; i < n; i++){
        b[i].valido = 0;
    }
}

void cadastrarlivros(struct livro b[], int n){
    for(int i=0; i<n; i++){
        printf("Cadastro de livro #%d: \n" , i+1);

        printf("Nome do livro: ");
        fflush(stdin);
        gets(b[i].nome);

        printf("Ano: ");
        fflush(stdin);
        scanf("%d" , &b[i].ano);

        b[i].valido = 1;
    }
}

void imprimeBib(struct livro b[], int n){
    for(int i=0; i<n; i++){
        printf("[Nome: %s - Ano: %d] \n" , b[i].nome, b[i].ano);
    }
}
