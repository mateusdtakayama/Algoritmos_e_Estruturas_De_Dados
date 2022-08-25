#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct poltrona{
    char fileira;
    int num;
    int ocupado;
    char nome[50];

};
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tam = 3, opcao, num, fileira;
    char letra;

    struct poltrona cinema[tam][tam];

    //coloca todas as poltronas como disponíveis
    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++){
            cinema[i][j].ocupado = 0;
        }
    }


    do{
        printf("---------- Menu ---------- \n");
        printf(" 1. Reservar poltrona. \n");
        printf(" 2. Comprar poltrona. \n");
        printf(" 3. Cancelar reserva. \n");
        printf(" 4. Sair do programa. \n");
        printf("-------------------------- \n");
        printf(" Digite a opção desejada: ");
        scanf("%d" , &opcao);

        switch(opcao){

        case 1:
            printf(" Poltronas disponíveis: \n");
            disponivel(tam, cinema);
            fflush(stdin);
            printf(" Em qual fileira deseja reservar? \n");
            scanf("%c", &letra);
            fileira = letra - 97;
            printf(" Qual o numero da poltrona? \n");
            scanf("%d" , &num);

            printf("%d", fileira);

            printf("Reservando %c%d... \n", letra, num);

            for(int i=0;i<tam;i++){
                for(int j=0;j<tam;j++){
                    if(i == fileira && j == num ){
                        cinema[i][j].ocupado = 1;
                    }
                }
            }
            disponivel(tam, cinema);
            break;
        case 2:
            //disponiveis();
            break;
        case 3:
            //reservadas();
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

            if(cinema[i][j].ocupado == 0){
                printf(" %c%d " , caracter, j);
            }else{
                printf("    ");
            }
            if(j+1 == tam){
                    caracter++;
            }

        }
        printf("\n");
    }

}

