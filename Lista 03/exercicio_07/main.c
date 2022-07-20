#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int soma = 0, Maior = 0, Menor = 0;
    int n;
    for(int i=1; i <= 20; i++)
    {
        printf("Insira a idade %d: \n", i);
        scanf("%d", &n);

        if(n >= 18)
        {
            Maior += 1;
        }
        else
            Menor += 1;
    }
    printf("%d pessoas são menores de idade.\n" , Menor);
    printf("%d pessoas são maiores de idade.\n" , Maior);

    return 0;
}
