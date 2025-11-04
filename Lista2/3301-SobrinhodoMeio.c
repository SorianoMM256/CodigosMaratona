#include <stdio.h>
#include <stdlib.h>

int comparaInt(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}

int main(){
    int h, z, l;
    int vet[3];
    scanf("%d %d %d", &h, &z, &l);
    vet[0] = h;
    vet[1] = z;
    vet[2] = l;
    qsort(vet, 3, sizeof(int), comparaInt);
    if (h == vet[1]){
        printf("huguinho\n");
    }
    else{
        if (z == vet[1]){
            printf("zezinho\n");
        }
        else{
            printf("luisinho\n");
        }
    }

    return 0;
}