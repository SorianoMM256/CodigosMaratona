#include <stdio.h>
#include <string.h>

unsigned long long int Kfatorial(int n, int k){
    if (n <= 1)
        return 1;
    else
        return n * Kfatorial(n - k, k);
}

int main(){
    int casos;

    scanf("%d", &casos);

    for (int i = 0; i < casos; i++){

        unsigned long long int res;
        char entrada[21];
        int k, n;

        scanf("%d %s", &n, entrada);
        k = strlen(entrada);

        res = Kfatorial(n, k);
        printf("%llu\n", res);
    }

    return 0;
}