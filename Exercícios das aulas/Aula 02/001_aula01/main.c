#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    n = 30;
    printf("O valor de n eh de %d \n", n);
    int x = 40;
    int a = 777;

    printf("o valor de x = %d e de y = %d \n", x,n);
    printf("O valor de z = %d e de h = %d \n", 500, 600);
    printf("o valor da variavel %s contem o valor de %d \n", "a", a);
    printf("%d \n", 500000);
    printf("%.4f \n", 10.0);

    int d, e, f;
    float g, h, i;
    d = 10, e = 20, f = 30;
    g = 10.1, h = 20.2, i = 30.3;

    printf("%s vale %d \n","d", d);
    printf("%s vale %d \n","e", e);
    printf("%s vale %d \n","f", f);
    printf("%s vale %.1f \n","g", g);
    printf("%s vale %.1f \n","h", h);
    printf("%s vale %.1f \n","i", i);

    int idade;

    printf("Digite a sua idade:\n");
    scanf("%d" , &idade);
    printf("A sua idade eh %d \n" , idade);

    int ano, ano2;
    ano = 2022 - idade;
    ano2 = 2021 - idade;

    printf("Voce nasceu no ano de %d ou de %d\n" , ano2, ano);
    int resultado;
    resultado = 5%2;
    printf("A sobra da divisao de 5/2 eh de %d" , resultado);


    return 0;
}
