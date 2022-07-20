#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int ID;
    float taxa, salI,salF;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira 101 para Gerente \n");
    printf("Insira 102 para Engenheiro \n");
    printf("Insira 103 para Técnico \n");
    printf("Insira 104 para outros cargos \n");
    scanf("%d" , &ID);
    printf("Insira o salário atual: \n");
    scanf("%f" , &salI);

    if(ID == 101)
        salF = salI + salI*0.1;
    else if(ID == 102)
        salF = salI + salI*0.2;
    else if(ID == 103)
        salF = salI + salI*0.3;
    else
        salF = salI + salI*0.4;

    printf("O salário inicial foi: R$%.2f\n" , salI);
    printf("O salário após o aumento é: R$%.2f\n" , salF);
    printf("O aumento foi: R$%.2f\n" , salF-salI);
    return 0;
}
