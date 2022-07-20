#include <stdio.h>
#include <stdlib.h>

int main()
{
    int meses, anos, dias, sobra, n, sobra2;
    printf("Insira a quantidade de dias totais sem acidentes: \n");
    scanf("%d" , &n);
    anos = n/365; //anos vai ser inteiro da divisao do totais de dias/365;
    sobra = n - (anos*365);
    meses = sobra/30; //o que sobra da divisao dos anos dividido por 30 sera os meses;
    sobra2 = n - (anos*365)-(meses*30);
    dias = sobra2;
    //printf("Estamos a %d anos sem acidentes.\n" , anos);
    //printf("Estamos a %d meses sem acidentes. \n" , meses);
    //printf("Estamos a %d dias sem acidentes. \n" , dias);
    printf("Estamos a %d dias, %d meses e %d anos sem acidentes \n" , dias, meses, anos);

    return 0;
}
