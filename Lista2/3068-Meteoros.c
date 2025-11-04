#include <stdio.h>

int main(){

    int x1, x2, y1, y2, teste = 1;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    while (x1, x2, y1, y2 != 0){
        int casos, cont = 0;
        scanf("%d", &casos);
        for (int i = 0; i < casos; i++){
            int posiX, posiY;
            scanf("%d %d", &posiX, &posiY);
            if ((x1 <= posiX) && (posiX <= x2) && (y1 >= posiY) && (posiY >= y2)){
                cont++;
            }
        }
        printf("Teste %d\n", teste);
        printf("%d\n", cont);

        teste++;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    }

    return 0;
}