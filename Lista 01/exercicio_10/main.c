#include <stdio.h>
#include <stdlib.h>
#include <math.h> //para conseguir fazer exponenciacao e raiz
int main()
{
    float primeiroX, primeiroY, segundoX, segundoY;
    printf("Digite a cordenada X do ponto 1: \n");
    scanf("%f" , &primeiroX);
    printf("Digite a cordenada Y do ponto 1: \n");
    scanf("%f" , &primeiroY);
    printf("Digite a cordenada X do ponto 2: \n");
    scanf("%f" , &segundoX);
    printf("Digite a cordenada Y do ponto 2: \n");
    scanf("%f" , &segundoY);

    printf("O primeiro ponto esta em (%0.2f,%0.2f) \n" , primeiroX, primeiroY);
    printf("O segundo ponto esta em (%0.2f,%0.2f) \n" , segundoX, segundoY);

    double resposta;

    resposta = sqrt(pow(segundoX-primeiroX,2)+ pow(segundoY-primeiroY,2));
    //double disX, disY, dtotal, resposta;

    //disX = pow(segundoX-primeiroX, 2);
    //disY = pow(segundoY-primeiroY, 2);
    //dtotal = disX+disY;
    //resposta = sqrt(dtotal);



    printf("A distancia entre os dois pontos eh: %0.2lf \n" , resposta);
    return 0;
}
