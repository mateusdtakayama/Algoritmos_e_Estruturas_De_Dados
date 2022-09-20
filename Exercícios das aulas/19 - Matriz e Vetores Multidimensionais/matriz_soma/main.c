#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void preencher(int matriz1[3][3], int id);
void preencher(int matriz2[3][3], int id);
void soma(int matriz1[3][3], int matriz2[3][3]);
void imprimir(int mat[3][3]);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int matriz1[3][3], matriz2[3][3];

    preencher(matriz1, 1);
    preencher(matriz2, 2);
    soma(matriz1, matriz2);
    imprimir(matriz1);


    return 0;
}

void preencher(int mat[3][3], int id){

    printf("----- Matriz %d ----- \n", id);
    for(int lin = 0; lin < 3; lin++){
        for(int col = 0; col < 3; col++){
            printf("[%d] [%d]: " , lin+1, col+1);
            scanf("%d", &mat[lin][col]);
        }
    }
}

 void soma(int mat1[3][3], int mat2[3][3]){

    for(int lin = 0; lin < 3; lin++){
        for(int col = 0; col < 3; col++){
            mat1[lin][col] = mat1[lin][col] + mat2[lin][col];
        }
    }
}

void imprimir(int mat[3][3]){
    printf("----- Soma ----- \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("[%d]  ", mat[i][j]);
        }
        printf("\n");
    }
}

