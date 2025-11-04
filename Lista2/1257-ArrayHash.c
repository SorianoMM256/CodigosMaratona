#include <stdio.h>
#include <string.h>

int main(){
    int casos;

    scanf("%d", &casos);

    for (int i = 0; i < casos; i++){
        int linhas, saida = 0, elemento = 0;

        scanf("%d", &linhas);

        for (int j = 0; j < linhas; j++){
            char entrada[51];

            scanf("%s", entrada);

            int tam = strlen(entrada);

            for (int k = 0; k < tam; k++){
                elemento = (entrada[k] - 'A');
                saida += elemento + k + j;
            }
        }

        printf("%d\n", saida);
    }

    return 0;
}