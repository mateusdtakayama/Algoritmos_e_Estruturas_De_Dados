#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int qntNovelos, qntBlusas, novelos;
    printf("Insira quantos novelos de lã gasta por blusa: \n");
    scanf("%d", &qntNovelos);
    printf("Insira quantas blusas serao feitas: \n");
    scanf("%d", &qntBlusas);
    novelos = qntNovelos*qntBlusas;
    printf("A quantidade de novelos para produzir %d blusas é de: %d \n", qntBlusas, novelos);


    return 0;
}
