#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int quantia,i=0, n;
    float preco, resultado;

    printf("Insira a quantia de produtos comprados: \n");
    scanf("%d" , &n);
    while(i < n){
    printf("Insira o preço do produto %d: \n" , i+1);
    scanf("%f" , &preco);
    resultado = resultado + preco;
    i++;
    }
    printf("O valor total a ser pagado é: %.2f" , resultado);

    return 0;

}
