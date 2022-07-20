#include <stdio.h>
#include <stdlib.h>

int main()
{
    float primeira, segunda, terceira;
    printf("Insira a primeira nota de 0-100: \n");
    scanf("%f" , &primeira);
    printf("Insira a segunda nota de 0-100: \n");
    scanf("%f" , &segunda);
    printf("Insira a terceira nota de 0-100: \n");
    scanf("%f" , &terceira);
    printf("As notas foram %0.2f, %0.2f e %0.2f \n" , primeira, segunda, terceira);

    float media;
    media = ((primeira*1)+(segunda*2)+(terceira*3))/6;
    printf("A sua media na disciplina foi: %0.2f" , media);
    return 0;
}
