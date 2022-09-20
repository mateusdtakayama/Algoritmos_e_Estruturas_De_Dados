#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


struct Mercado{
char nome[80];
double preco;
int quantidade;
};

int main()
{
    int TAM;
    setlocale(LC_ALL, "Portuguese");
    int opcao;

    printf("Insira quantos produtos vão ser inseridos: \n ");
    scanf("%d" , &TAM);

    struct Mercado produto[TAM];


    do{

    //menu
    opcao = menu();

        switch(opcao){

        case 1:
            //preencher
            preencher(TAM, produto);
            break;
        case 2:
            //ordenação preço
            ordenacaoPreco(TAM, produto);
            break;
        case 3:
            //ordenação estoque
            ordenacaoEstoque(TAM, produto);
            break;
        case 0:
            opcao = 0;
            break;
        default:
            {
            printf("A opção está incorreta! \n");
            }

        }
    }while(opcao != 0);
    return 0;
}

int menu(){

    int opcao;

    printf("*************** Menu *************** \n");
    printf("1- Cadastrar novos produtos \n");
    printf("2- Mostrar produtos ordenados por preço \n");
    printf("3- Mostrar produtos ordenados por estoque \n");
    printf("0- Encerrar o programa \n");
    printf("************************************ \n");
    printf("Insira a sua opcao: ");
    scanf("%d", &opcao);

    return opcao;
}

void preencher(int TAM, struct Mercado produto[]){

    for(int i=0; i<TAM;i++){

            printf("Insira o nome do produto [%d]: \n" , i+1);
            scanf("%s" , produto[i].nome);

            printf("Insira o preço do produto [%d]: \n" , i+1);
            scanf("%lf" , &produto[i].preco);

            printf("Insira a quantidade em estoque do produto [%d]: \n", i+1);
            scanf("%d" , &produto[i].quantidade);
    }

}

void ordenacaoPreco(int TAM, struct Mercado produto[]){
        int i,j;
        struct Mercado aux;
        for(i = 1; i < TAM; i++){

            aux = produto[i];

            for(j = i-1; j >= 0 && aux.preco < produto[j].preco; j--){

                produto[j+1] = produto[j];
                }
            produto[j+1] = aux;
        }

        for(int i=0; i<TAM;i++){
            printf("------------- Produto [%d] -------------\n", i+1);
            printf("Nome: %s.\n", produto[i].nome);
            printf("Preco: %.2lf. \n", produto[i].preco);
            printf("Estoque: %d. \n", produto[i].quantidade);
            printf("---------------------------------------- \n");
    }
}

void ordenacaoEstoque(int TAM, struct Mercado produto[]){
        int i,j;
        struct Mercado aux;

        for(i = 1; i < TAM; i++){

            aux = produto[i];

            for(j = i-1; j >= 0 && aux.quantidade < produto[j].quantidade; j--){

                produto[j+1] = produto[j];
                }
            produto[j+1] = aux;
    }
    for(int i=0; i<TAM;i++){
        printf("------------- Produto [%d] -------------\n", i+1);
        printf("Nome: %s.\n", produto[i].nome);
        printf("Preco: %.2lf. \n", produto[i].preco);
        printf("Estoque: %d. \n", produto[i].quantidade);
        printf("---------------------------------------- \n");
    }
}
