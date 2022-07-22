#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int lin = 0; lin <= 7; lin++){

            for (int col = 0; col <= 7; col++){
                printf("[%d,%d] " , lin, col);

            }
            printf("\n");
    }
    return 0;
}
