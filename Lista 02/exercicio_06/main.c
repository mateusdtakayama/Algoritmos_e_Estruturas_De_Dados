#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int a, b, c;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o valor da variável a: \n");
    scanf("%d", &a);
    printf("Insira o valor da variável b: \n");
    scanf("%d", &b);
    printf("Insira o valor da variável c: \n");
    scanf("%d", &c);

    if((a>=b) && (a>=c))
        if((b>c))
            printf("%d,%d,%d", c, b, a);
        else
            printf("%d,%d,%d", b, c, a);
    else if((b>=a) && (b>=c))
        if((c>=a))
            printf("%d,%d,%d", a, c, b);
        else
            printf("%d,%d,%d", c, a, b);

    else if((c>=a) && (c>=b))
        if((b>=a))
            printf("%d,%d,%d", a, b, c);
        else
            printf("%d,%d,%d", b, a, c);
    return 0;
}
