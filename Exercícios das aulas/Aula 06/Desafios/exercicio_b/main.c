#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int lin = 0; lin <= 7; lin++){

        for(int col = 0; col <= 7; col++){
            //para ser os acima da diagonal secundaria, eles tem que ter a soma de ambos os números menores que 7
            //pois toda a diagonal secundaria para baixo possui soma > 7
            if (col+lin <= 7){
            printf("# ");
        }
        }
        printf("\n");
    }
    return 0;
}
