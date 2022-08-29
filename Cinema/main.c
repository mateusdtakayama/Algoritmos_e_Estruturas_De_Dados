#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct poltrona{
    char fileira;
    int num;
    int ocupado;
    char nome[50];

};

void disponivel(int tam, struct poltrona cinema[tam][tam]);
void reservadas(int tam, struct poltrona cinema[tam][tam]);
int menu();
void reservar(int tam, struct poltrona cinema[tam][tam], int letra, int fileira, int num);
void comprar(int tam, struct poltrona cinema[tam][tam], int letra, int fileira, int num);
void cancelar(int tam, struct poltrona cinema[tam][tam], int letra, int fileira, int num);


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tam = 5, opcao, num, fileira;
    char letra;

    struct poltrona cinema[tam][tam];

    //coloca todas as poltronas como disponíveis
    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++){
            cinema[i][j].ocupado = 0;
        }
    }


    do{


        switch(menu()){

        case 1:
            reservar(tam, cinema, letra, fileira, num);
            break;
        case 2:
            comprar(tam, cinema, letra, fileira, num);
            break;
        case 3:
            cancelar(tam, cinema, letra, fileira, num);
            break;
        case 4:
            opcao = 4;
            break;
        default:
            {
            printf(" Opção não está no menu. \n");
            break;
            }

    }
    }while(opcao!=4);






    /*
    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++){
            printf("cinema[%d][%d]: %d. \n", i, j, cinema[i][j].ocupado);
        }
    }
    */


    return 0;
}

void disponivel(int tam, struct poltrona cinema[tam][tam]){
    int caracter = 97;
    for(int i=0; i<tam;i++){
        for(int j=0; j<tam;j++){

            if(cinema[i][j].ocupado == 0){ // 0 = livre
                printf(" %c%d " , caracter, j);
            }else if(cinema[i][j].ocupado == 2){ //2 = comprada
                printf("    ");
            }else{
                printf(" ** "); // 1 = reservada
            }
            if(j+1 == tam){
                    caracter++;
            }

        }
        printf("\n");
    }

}

void reservadas(int tam, struct poltrona cinema[tam][tam]){
    int caracter = 97;
    for(int i=0; i<tam;i++){
        for(int j=0; j<tam;j++){

            if(cinema[i][j].ocupado == 0){
                printf("     ");
            }else if(cinema[i][j].ocupado == 2){
                printf("     ");
            }else{
                printf(" %c%d ", caracter, j);
            }
            if(j+1 == tam){
                    caracter++;
            }

        }
        printf("\n");
    }
}

int menu(){
    int opcao;
        printf("---------- Menu ---------- \n");
        printf(" 1. Reservar poltrona. \n");
        printf(" 2. Comprar poltrona. \n");
        printf(" 3. Cancelar reserva. \n");
        printf(" 4. Sair do programa. \n");
        printf("-------------------------- \n");
        printf("Digite a opção desejada: ");
        scanf("%d" , &opcao);

    return opcao;
}

void reservar(int tam, struct poltrona cinema[tam][tam], int letra, int fileira, int num){
    printf("Poltronas disponíveis: \n");
    disponivel(tam, cinema);
    fflush(stdin);
    printf("Em qual fileira deseja reservar? \n");
    scanf("%c", &letra);
    fileira = letra - 97;
    printf("Qual o numero da poltrona? \n");
    scanf("%d" , &num);

    printf("Reservando %c%d... \n", letra, num);

    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            if(i == fileira && j == num){
                if(cinema[i][j].ocupado != 1 && cinema[i][j].ocupado != 2){
                   cinema[i][j].ocupado = 1;
                }else{
                    printf("A poltrona inserida não está disponível! \n");
                }

            }
        }
    }
}

void comprar(int tam, struct poltrona cinema[tam][tam], int letra, int fileira, int num){
    printf("Poltronas disponíveis: \n");
    disponivel(tam, cinema);
    fflush(stdin);
    printf("Em qual fileira deseja comprar? \n");
    scanf("%c", &letra);
    fileira = letra - 97;
    printf("Qual o numero da poltrona? \n");
    scanf("%d" , &num);

    printf("Comprando %c%d... \n", letra, num);

    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            if(i == fileira && j == num ){
                if(cinema[i][j].ocupado != 1 && cinema[i][j].ocupado != 2){
                   cinema[i][j].ocupado = 2;
                }else{
                    printf("A poltrona inserida não está disponível! \n");
                }
            }
        }
    }
}


void cancelar(int tam, struct poltrona cinema[tam][tam], int letra, int fileira, int num){

    printf("Poltronas reservadas: \n");
    reservadas(tam, cinema);
    fflush(stdin);
    printf("Em qual fileira deseja cancelar a reserva? \n");
    scanf("%c", &letra);
    fileira = letra - 97;
    printf("Qual o numero da poltrona? \n");
    scanf("%d" , &num);

    printf("Cancelando %c%d... \n", letra, num);

    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            if(i == fileira && j == num ){
                if(cinema[i][j].ocupado != 0 && cinema[i][j].ocupado != 2){
                   cinema[i][j].ocupado = 0;
                }else{
                    printf("A poltrona inserida não foi reservada! \n");
                }
            }
        }
    }
}
