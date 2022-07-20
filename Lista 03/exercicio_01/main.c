#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    for(int i = 0; i < 20; i++)
    {
        printf("Esta é a mensagem %d. \n", i+1);
    }
    return 0;
}
