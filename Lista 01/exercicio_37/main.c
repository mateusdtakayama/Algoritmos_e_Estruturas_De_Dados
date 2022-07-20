#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float num;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira número:\n");
    scanf("%f", &num);
    printf("%.1f*1 = %.1f\n" , num , num*1);
    printf("%.1f*2 = %.1f\n" , num , num*2);
    printf("%.1f*3 = %.1f\n" , num , num*3);
    printf("%.1f*4 = %.1f\n" , num , num*4);
    printf("%.1f*5 = %.1f\n" , num , num*5);
    printf("%.1f*6 = %.1f\n" , num , num*6);
    printf("%.1f*7 = %.1f\n" , num , num*7);
    printf("%.1f*8 = %.1f\n" , num , num*8);
    printf("%.1f*9 = %.1f\n" , num , num*9);
    printf("%.1f*10 = %.1f\n" , num , num*10);



    return 0;
}
