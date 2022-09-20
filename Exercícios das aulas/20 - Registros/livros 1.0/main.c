#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct livro{
    char nome[50];
    char editora[50];
    int numpag;
    int ocupado;
};

struct livro info[5];

int lermenu(){
    int a = 0;

    printf("*************** Menu *************** \n");
    printf("1- Cadastrar novos livros \n");
    printf("2- Mostrar os livros cadastrados \n");
    printf("0- Encerrar o programa \n");
    printf("************************************ \n");

    do{
        printf("Digite sua opção: ");
        scanf("%d", &a);
    }while(a < 0 || a > 2);
    return a;
}

void preencher(){
    for(int i = 0; i < 5; i++){
        fflush(stdin);

        printf("Digite o nome do livro [%d]: \n", i+1);
        gets(info[i].nome);

        printf("Digite o nome da editora [%d]: \n", i+1);
        gets(info[i].editora);

        printf("Digite o número de páginas do livro [%d]: \n", i+1);
        scanf("%d", &info[i].numpag);
    }
}

void imprimir(){
    for(int i = 0; i < 5; i++){
        printf("------ Livro [%d] ------\n", i+1);
        printf("Nome: %s.\n", info[i].nome);
        printf("Editora: %s. \n", info[i].editora);
        printf("Número de páginas: %d. \n", info[i].numpag);
        printf("----------------------- \n");
    }
}

int main()
{
    int opcao = 0;
    setlocale(LC_ALL, "Portuguese");

    do{
        opcao = lermenu();

        switch(opcao){
        case 1:
            preencher();
            break;

        case 2:
            imprimir();
            break;

        case 0:
            printf("Saindo...");
            break;

        }
    }while(opcao != 0);



return 0;
}
