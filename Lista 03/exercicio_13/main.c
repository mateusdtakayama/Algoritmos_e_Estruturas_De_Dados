#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n=0, soma=0;
    for(int i = 0; n >= 0; i++)
    {
        printf("%d. Insira um n�mero n: \n", i+1);
        scanf("%d", &n);
        if(n>= 0)
        {
            soma = soma+n;
        }
    }
    printf("A soma dos n�meros �: %d.", soma);
    return 0;

}
