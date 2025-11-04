#include <stdio.h>

int main()
{

    int x1, x2, y1, y2;
    int auxDiagonal, pular = 0;
    scanf(" %d %d %d %d", &x1, &y1, &x2, &y2);
    while (x1 != 0)
    {
        pular = 0;
        if ((x1 == x2) && (y1 == y2))
        {
            printf("%d\n", 0);
            pular++;
        }
        else
        {
            if ((x1 == x2) || (y1 == y2))
            {
                printf("%d\n", 1); // lareral ou vertical
                pular++;
            }
            // verificar diagonal
            if (x1 > x2)
            {
                auxDiagonal = x1 - x2;
                if ((y1 + auxDiagonal) == y2)
                {
                    printf("%d\n", 1);
                    pular++;
                }
                else
                {
                    if ((y1 - auxDiagonal) == y2)
                    {
                        printf("%d\n", 1);
                        pular++;
                    }
                }
            }
            else
            {
                if (x2 > x1)
                {
                    auxDiagonal = x2 - x1;
                    if ((y1 - auxDiagonal) == y2)
                    {
                        printf("%d\n", 1);
                        pular++;
                    }
                    else
                    {
                        if ((y1 + auxDiagonal) == y2)
                        {
                            printf("%d\n", 1);
                            pular++;
                        }
                    }
                }
            }
            if (pular == 0)
                printf("%d\n", 2);
        }
        scanf(" %d %d %d %d", &x1, &y1, &x2, &y2);
    }
    return 0;
}