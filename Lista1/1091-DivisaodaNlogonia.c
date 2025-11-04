#include <stdio.h>

int main()
{
    int consultasK, divisorN, divisorM, xK, yK;

    scanf("%i", &consultasK);
    while (consultasK != 0){
        scanf("%i %i", &divisorN, &divisorM);
        for (int i = 0; i < consultasK; i++){
            scanf("%i %i", &xK, &yK);
            if ((xK == divisorN) || (yK == divisorM)){
                printf("divisa\n");
            }
            else{
                if (yK > divisorM)
                    printf("N");
                if (yK < divisorM)
                    printf("S");
                if (xK > divisorN)
                    printf("E");
                if (xK < divisorN)
                    printf("O");
                printf("\n");
            }
        }
        scanf("%i", &consultasK);
    }

    return 0;
}