#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Ol�!\n");
    printf("Hello world!\n");
    return 0;
}
