#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int quilometragem = 0, i = 0, n;

    printf("A viagem come�a agora, estamos no quil�metro 0.\n");

    while (quilometragem < 4000){

    printf("Estamos agora cidade %d do trajeto, quantos quilometros foram percorridos desde a �ltima cidade? \n" , i+1);
    scanf("%d", &n);
    quilometragem = quilometragem + n;
    i++;
    }
    printf("A viagem encerrou na cidade %d. Foram percorridos %d quilometros." , i, quilometragem);

    return 0;

}
