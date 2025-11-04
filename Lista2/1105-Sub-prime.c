#include <stdio.h>

int main(){
    int b, n;

    while (scanf("%d %d", &b, &n) == 2 && b != 0 && n != 0){
        int saldos[b];

        for (int i = 0; i < b; i++){
            scanf("%d", &saldos[i]);
        }

        for (int j = 0; j < n; j++){
            int d, c, v;
            scanf("%d %d %d", &d, &c, &v);

            // Ajustando índice (-1)
            saldos[d - 1] -= v;
            saldos[c - 1] += v;
        }

        int verifica = 0;
        for (int k = 0; k < b; k++){
            if (saldos[k] < 0){
                verifica = 1;
                break;
            }
        }

        if (verifica)
            printf("N\n");
        else
            printf("S\n");
    }

    return 0;
}
