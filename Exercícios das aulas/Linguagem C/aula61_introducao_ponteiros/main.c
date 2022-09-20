#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    x = 10;

    int *ponteiro; // por enquanto n�o aponta para lugar algum

    ponteiro = &x; // ponteiro agora est� apontando para o endere�o de mem�ria da vsri�vel x

    printf("%p\n" , &x); // endere�o da mem�ria do computador que contem a vari�vel x

    printf("%d\n" , x); // valor da vari�vel

    printf("%d\n" , *ponteiro); // * = acessa o local para onde o ponteiro est� apontando

    printf("%p\n" , ponteiro); // sem * acessa o endere�o de mem�ria //&p = correto para endere�o de mem�ria

    int y = 20;

    printf("%d %d \n" , x, y);

    *ponteiro = y;

    printf("%d %d \n" , x, y);

    return 0;
}
