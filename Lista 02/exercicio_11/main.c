#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int num, horas;
    float salario;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o nível do professor 1-3: \n");
    scanf("%d" , &num);
    printf("Insira a quantidade de horas trabalhadas: \n");
    scanf("%d" , &horas);

    if(num == 1)
        salario = 17.00*4.5*horas;
    else if (num == 2)
        salario = 17.00*4.5*horas;
    else if (num == 3)
        salario = 25.00*4.5*horas;
    else
        printf("Opção inválida \n");

    printf("O salário foi de: R$%.2f \n" , salario);
    return 0;
}
