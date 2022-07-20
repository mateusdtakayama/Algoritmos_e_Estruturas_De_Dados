#include <stdio.h>
#include <stdlib.h>

int main()
{
    float qnt, queijo, presunto, carne;
    printf("Insira a quantidade de sanduiches a ser feitos: \n");
    scanf("%f" , &qnt);
    queijo = (qnt*2*50)/1000;
    presunto = (qnt*1*50)/1000;
    carne = (qnt*1*200)/1000;
    printf("Para fazer os %.0f sanduiches eh necessario %0.2f quilos de queijo\n" , qnt, queijo);
    printf("Para fazer os %.0f sanduiches eh necessario %0.2f quilos de presunto\n" , qnt, presunto);
    printf("Para fazer os %.0f sanduiches eh necessario %0.2f quilos de carne\n" , qnt, carne);

    return 0;
}
