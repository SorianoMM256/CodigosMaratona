#include <stdio.h>

int main(){
    int NC;
    scanf("%d", &NC);

    for (int caso = 1; caso <= NC; caso++){
        int n, k;
        scanf("%d %d", &n, &k);

        int pessoas[n];
        for (int i = 0; i < n; i++){
            pessoas[i] = i + 1; // numeração de 1 até n
        }

        int vivos = n; // quantos ainda restam
        int idx = 0;   // começa na primeira pessoa (índice 0)

        while (vivos > 1){
            // andar k-1 vivos adiante
            int passos = (k - 1) % vivos;
            idx = (idx + passos) % vivos;

            // eliminar pessoa
            for (int j = idx; j < vivos - 1; j++){
                pessoas[j] = pessoas[j + 1]; // desloca para "remover"
            }
            vivos--;

            // idx já aponta para o próximo da rodada
            if (idx >= vivos){
                idx = 0; // volta se passar do limite
            }
        }

        printf("Case %d: %d\n", caso, pessoas[0]);
    }

    return 0;
}
