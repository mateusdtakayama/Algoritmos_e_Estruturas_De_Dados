#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int lin = 0; lin <= 7; lin++) {

        for(int col = 0; col <=7; col++) {
            if(lin==0) {
                printf("# ");
            } else if(lin == 7) {
                printf("# ");
            } else if(lin+col == 7) {
                printf("# ");
            }else if(lin == col) {
                printf("# ");
            } else {
                printf("  ");
            }

        }
        printf("\n");
    }
    return 0;
}

