#include <stdio.h>

int main(){
    int casos;
    scanf("%d", &casos);

    for (int i = 0; i < casos; i++){
        int n, soma = 0;
        scanf("%d", &n);

        // soma dos divisores próprios de n
        for (int j = 1; j <= n / 2; j++){
            if (n % j == 0)
                soma += j;
        }
        if (soma == n){
            printf("%d eh perfeito\n", n);
        }else{
            printf("%d nao eh perfeito\n", n);
        }
    }

    return 0;
}