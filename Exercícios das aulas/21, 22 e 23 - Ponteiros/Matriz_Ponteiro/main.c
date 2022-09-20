#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam, **mat;
    int lin, col;
    lin = 5;
    col = 3;

    // aloca as linhas da matriz
    mat = malloc (lin * sizeof(int*));

    // para cada inha aloca as colunas
    for(int i=0; i<lin;i++){
        mat[i] = malloc (col * sizeof(int));
    }

    //preenche a matriz
    for(int i=0; i<lin;i++){
        for(int j=0; j<col;j++){
            mat[i][j] = i+j;
        }
    }

    //imprime a matriz
     for(int i=0; i<lin;i++){
        for(int j=0; j<col;j++){
            printf("%d " , mat[i][j]);
        }
        printf("\n");
    }

    //para cada liha libera as colunas alocadas
    for(int i=0; i<lin; i++){
        free(mat[i]);
    }

    //libera as linhas
    free(mat);

    return 0;
}
