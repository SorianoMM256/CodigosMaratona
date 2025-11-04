#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int total = 0;
    for (int i = 0; i < N; i++)
    {
        int s;
        scanf("%d", &s);
        total += (s / 3) * 3; // maior múltiplo de 3 possível
    }

    printf("%d\n", total);

    return 0;
}