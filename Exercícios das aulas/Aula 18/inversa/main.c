#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    char str[90];
    char inversa[90];

    printf("Digite uma frase de até 80 caracteres: \n");
    gets(str);


    for(int i = strlen(str) -1 , j = 0; i >= 0 ; i-- , j++){
        inversa[j] = str[i];
    }

    printf("%s" , inversa);

    return 0;
}
