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

    printf("%d:%d:%d" , agora.hora, agora.minuto, agora.segundo);

    // depois->hora = (*depois.hora)


    return 0;
}
