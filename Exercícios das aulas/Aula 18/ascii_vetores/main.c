#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    char texto[1000];
    int contador[255];

    //serve para zerar todas as posicoes do vetor contador
    for(int i=0;i<255;i++) {
        contador[i] = 0;
    }

    //pedindo o texto
    printf("insira um texto qualquer: \n");
    gets(texto);

    //percorre desde 0 até o tamanho do texto
    for(int indiceTAM = 0; indiceTAM < strlen(texto); indiceTAM++){

        //percorre a tabela asc, de 0 até 255
        for(int indiceASC = 0; indiceASC < 255; indiceASC++){

                //compara se a posicao 0 do texto é igual a algo na tabela asc, se sim, adiciona
                //um na contagem
                if(texto[indiceTAM] == indiceASC){
                    contador[indiceASC]++;
            }
        }
    }
    //for para imprimir todas as letras achadas
    for(int i = 0; i < 255; i++){
        if (contador[i])
            printf("%d %c foram achados no texto. Na tabela ASCII equivale à: %d \n", contador[i] , i, i);
    }
    return 0;
}
