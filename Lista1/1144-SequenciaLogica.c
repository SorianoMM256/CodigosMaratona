#include <stdio.h>

int main()
{
    unsigned int n1, n2 = 1, n3 = 1, cont = 0;
    scanf("%i", &n1);
    int temp = 2 * n1;
    n1 = 1;
    for (int i = 0; i < temp; i++)
    {
        printf("%d %d %d\n", n1, n2, n3);
        n2++;
        n3++;
        cont++;

        if (((cont % 2) == 0) && (cont != 0))
        {
            n1 += 1;
            n2 = n1 * n1;
            n3 = n1 * n2;
        }
    }
    return 0;
}