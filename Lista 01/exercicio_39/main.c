#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int c1, c2, sal, res;
    sal = 1200;
    c1 = 200;
    c2 = 120;
    res = sal - c1 - c2;
    printf("O resultado do salário após pagar as contas é de: R$%d" , res);
    return 0;
}
