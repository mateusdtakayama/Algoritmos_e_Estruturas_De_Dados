#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int anoNascimento, anoAgora, calcAno, calcMeses, calcDias, calcSemanas;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o ano de nascimento:\n");
    scanf("%d", &anoNascimento);
    printf("Insira o ano em que estamos:\n");
    scanf("%d", &anoAgora);
    calcAno = anoAgora - anoNascimento;
    calcMeses = calcAno * 12;
    calcDias = calcMeses * 30;
    calcSemanas = calcMeses*4;
    printf("a sua idade em anos é de: %d anos \n" , calcAno);
    printf("a sua idade em meses é de: %d meses \n" , calcMeses);
    printf("a sua idade em dias é de: %d dias \n" , calcDias);
    printf("a sua idade em semanas é de: %d semanas \n" , calcSemanas);
    return 0;
}
