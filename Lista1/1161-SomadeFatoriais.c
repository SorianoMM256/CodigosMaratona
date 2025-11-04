#include <stdio.h>
long long int fatorial(int x);
int main()
{
    int m, n;
    long long int result;

    while ((scanf("%d %d", &m, &n)) != EOF)
    {
        result = fatorial(m) + fatorial(n);
        printf("%lli\n", result);
    }
    return 0;
}
long long int fatorial(int x)
{
    long long int op;
    if (x == 0)
        return 1;
    op = x * fatorial(x - 1);
    return op;
}