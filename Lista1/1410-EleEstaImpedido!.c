#include <stdio.h>

int main()
{
    int a, d;

    while (scanf("%d %d", &a, &d) == 2 && (a || d))
    {
        int distMaisAta = 10000;
        int def1 = 10000, def2 = 10000; // dois menores defensores
        int x;

        // atacantes
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &x);
            if (x < distMaisAta)
                distMaisAta = x;
        }

        // defensores
        for (int i = 0; i < d; i++)
        {
            scanf("%d", &x);
            if (x < def1)
            {
                def2 = def1;
                def1 = x;
            }
            else if (x < def2)
            {
                def2 = x;
            }
        }

        if (distMaisAta < def2)
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}
