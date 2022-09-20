#include <stdio.h>
#include <stdlib.h>
#include "complexo.h"

int main()
{
    complexo a, b, c;

    a = complexo_le();
    b = complexo_le();

    c = complexo_soma(a,b);

    complexo_imprime(a);
    complexo_imprime(b);
    complexo_imprime(c);


    return 0;
}
