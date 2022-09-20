#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    x = 10;

    int *ponteiro; // por enquanto não aponta para lugar algum

    ponteiro = &x; // ponteiro agora está apontando para o endereço de memória da vsriável x

    printf("%p\n" , &x); // endereço da memória do computador que contem a variável x

    printf("%d\n" , x); // valor da variável

    printf("%d\n" , *ponteiro); // * = acessa o local para onde o ponteiro está apontando

    printf("%p\n" , ponteiro); // sem * acessa o endereço de memória //&p = correto para endereço de memória

    int y = 20;

    printf("%d %d \n" , x, y);

    *ponteiro = y;

    printf("%d %d \n" , x, y);

    return 0;
}
