#include <stdio.h>
#include <string.h>

int main(){
    int qntLeds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}; // Ordenado
    int casos;

    scanf("%d", &casos);
    for (int i = 0; i < casos; i++){
        char num[1001];
        int digitos, soma = 0;

        scanf("%s", num);
        digitos = strlen(num);

        for (int j = 0; j < digitos; j++){
            int teste = num[j] - '0';
            soma += qntLeds[teste];
        }
        printf("%d leds\n", soma);
    }
    return 0;
}