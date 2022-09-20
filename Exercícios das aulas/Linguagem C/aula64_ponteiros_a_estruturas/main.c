#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct horario{
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora, *depois;
    depois = &agora;

    // *depois.hora = 20; não funciona pois o C detecta primeiro o . do que o *

    (*depois).hora = 13;
    (*depois).minuto = 30;
    (*depois).segundo = 45;

    int somatorio = 100;

    struct horario antes;

    antes.hora = somatorio + depois->hora; // 100 + 13 = 113
    antes.minuto = agora.hora + agora.segundo; // 13 + 45 = 58
    antes.segundo = somatorio + depois->segundo; // 100+45 = 145


    printf("%d:%d:%d \n" , agora.hora, agora.minuto, agora.segundo);
    printf("%d:%d:%d \n" , antes.hora, antes.minuto, antes.segundo);



    return 0;
}
