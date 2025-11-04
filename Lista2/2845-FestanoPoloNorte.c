#include <stdio.h>

int mdc(int a, int b){
    return b == 0 ? a : mdc(b, a % b);
}

int ehCoprimo(int x, int vet[], int n){
    for (int i = 0; i < n; i++){
        if (mdc(x, vet[i]) != 1){
            return 0; // não é coprimo de todos
        }
    }
    return 1; // é coprimo de todos
}

int main(){
    int casos;
    scanf("%d", &casos);

    int vet[casos];
    int maior = 0;
    for (int i = 0; i < casos; i++){
        scanf("%d", &vet[i]);
        if (maior < vet[i])
            maior = vet[i];
    }

    int x = maior + 1; // começa testando a partir do maior numero +1
    while (1){
        if (ehCoprimo(x, vet, casos)){
            printf("%d\n", x);
            break;
        }
        x++;
    }

    return 0;
}
