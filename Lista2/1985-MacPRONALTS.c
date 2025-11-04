#include <stdio.h>

int main(){
    int casos = 0;
    float total = 0.0;
    scanf(" %d", &casos);
    int nPedido[5] = {1001, 1002, 1003, 1004, 1005};
    float vPedido[5] = {1.50, 2.50, 3.50, 4.50, 5.50};
    for (int i = 0; i < casos; i++){
        int pedido, qnt, posi;
        scanf("%d %d", &pedido, &qnt);
        for (int j = 1001; j < 1006; j++){
            if (j == pedido)
            {
                posi = j - 1001;
            }
        }
        total += vPedido[posi] * qnt;
    }
    printf("%.2f\n", total);

    return 0;
}