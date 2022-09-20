#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Data{
    int dia;
    int mes;
    int ano;
};

void preencher(int tam, struct Data registro[]);
void ordenar(int tam, struct Data registro[]);
void imprimir(int tam, struct Data registro[]);


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tam;

    //pedir a quantia de datas
    printf("Quantas datas serão ordenadas? \n");
    scanf("%d", &tam);

    struct Data registro[tam];

    //preencher as datas
    preencher(tam, registro);

    //ordenação
    ordenar(tam, registro);

    //imprime as datas
    imprimir(tam, registro);
    return 0;
}

void preencher(int tam, struct Data registro[]){

    for(int i=0; i < tam; i++){
            printf("Digite o dia da data %d: \n", i+1);
            scanf("%d" , &registro[i].dia);
            printf("Digite o mês da data %d: \n", i+1);
            scanf("%d" , &registro[i].mes);
            printf("Digite o ano da data %d: \n", i+1);
            scanf("%d" , &registro[i].ano);
    }

}

void ordenar(int tam, struct Data registro[]){

    int i,j;
        struct Data aux;

        //ordenador de dias
        for(i = 1; i < tam; i++){

            aux = registro[i];

            for(j = i-1; j >= 0 && aux.dia < registro[j].dia; j--){

                registro[j+1] = registro[j];
                }
            registro[j+1] = aux;
        }

        //ordenador de meses
        for(i = 1; i < tam; i++){

            aux = registro[i];

            for(j = i-1; j >= 0 && aux.mes < registro[j].mes; j--){

                registro[j+1] = registro[j];
                }
            registro[j+1] = aux;
        }

        //ordenador de anos
        for(i = 1; i < tam; i++){

            aux = registro[i];

            for(j = i-1; j >= 0 && aux.ano < registro[j].ano; j--){

                registro[j+1] = registro[j];
                }
            registro[j+1] = aux;
        }
}

void imprimir(int tam, struct Data registro[]){
    for(int i=0;i<tam;i++){
            printf("%d - %d - %d. \n", registro[i].dia, registro[i].mes,registro[i].ano);
    }

}
