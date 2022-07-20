#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float cent1, cent5, cent10, cent25, cent50, cent100, total;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira quantas moedas de 1 centavo foram economizadas: \n");
    scanf("%f" , &cent1);
    printf("Insira quantas moedas de 5 centavo foram economizadas: \n");
    scanf("%f" , &cent5);
    printf("Insira quantas moedas de 10 centavo foram economizadas: \n");
    scanf("%f" , &cent10);
    printf("Insira quantas moedas de 25 centavo foram economizadas: \n");
    scanf("%f" , &cent25);
    printf("Insira quantas moedas de 50 centavo foram economizadas: \n");
    scanf("%f" , &cent50);
    printf("Insira quantas moedas de 1 real foram economizadas: \n");
    scanf("%f" , &cent100);

    total = (cent1*0.01)+(cent5*0.05)+(cent10*0.10)+(cent25*0.25)+(cent50*0.50)+(cent100*1);
    printf("O valor economizado foi de: R$%0.2f" , total);
    return 0;
}
