#include <stdio.h>
#include "complexo.h"

complexo complexo_le() {
    complexo aux;

    printf("Real: ");
    scanf("%lf", &aux.real);

    printf("Imag: ");
    scanf("%lf", &aux.imag);

    return aux;
}

void complexo_imprime(complexo n) {
    printf("%.2lf %.2lfi\n", n.real, n.imag);
}

complexo complexo_soma(complexo a, complexo b) {
    complexo aux;

    aux.real = a.real + b.real;
    aux.imag = b.imag + b.imag;

    return aux;
}
