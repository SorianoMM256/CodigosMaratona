#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        printf("%d %d %d PUM\n", 1 + 4 * i, 2 + 4 * i, 3 + 4 * i);
    }
    return 0;
}