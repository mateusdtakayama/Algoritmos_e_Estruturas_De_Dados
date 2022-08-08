#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void preencher(int matriz[3][3]);
int media(int matriz[3][3]);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int matriz[3][3];

    preencher(matriz);
    printf("a média é: %d" , media(matriz));

    return 0;
}

void preencher(int matriz[3][3]){

    for(int lin = 0; lin < 3; lin++){
        for(int col = 0; col < 3; col++){
            printf("[%d] [%d]: " , lin+1, col+1);
            scanf("%d", &matriz[lin][col]);
        }
    }
}

int media(int matriz[3][3]){
    int contador = 0;

    for(int lin = 0; lin < 3; lin++){
        for(int col = 0; col < 3; col++){
            contador = contador + matriz[lin][col];
        }
    }
 return (contador/(3*3));
}
