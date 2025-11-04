#include <stdio.h>
#include <string.h>

int main()
{
    int casos;
    scanf("%d\n", &casos);

    while (casos--){
        char texto[1001]; // deixei maior por segurança
        fgets(texto, sizeof(texto), stdin);

        // remover quebra de linha
        texto[strcspn(texto, "\n")] = '\0';

        int tam = strlen(texto);

        // Passo 1: somar 3 às letras
        for (int j = 0; j < tam; j++){
            if ((texto[j] >= 'a' && texto[j] <= 'z') ||
                (texto[j] >= 'A' && texto[j] <= 'Z')) 
            {
                texto[j] = texto[j] + 3;
            }
        }

        // Passo 2: inverter a string
        for (int k = 0; k < tam / 2; k++){
            char aux = texto[k];
            texto[k] = texto[tam - k - 1];
            texto[tam - k - 1] = aux;
        }

        // Passo 3: deslocar -1 da metade em diante
        for (int l = tam / 2; l < tam; l++){
            texto[l] = texto[l] - 1;
        }

        puts(texto);
    }

    return 0;
}
