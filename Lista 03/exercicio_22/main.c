#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int quilometragem = 0, i = 0, n;

    printf("A viagem começa agora, estamos no quilômetro 0.\n");

    while (quilometragem < 4000){

    printf("Estamos agora cidade %d do trajeto, quantos quilometros foram percorridos desde a última cidade? \n" , i+1);
    scanf("%d", &n);
    quilometragem = quilometragem + n;
    i++;
    }
    printf("A viagem encerrou na cidade %d. Foram percorridos %d quilometros." , i, quilometragem);

    return 0;

}
