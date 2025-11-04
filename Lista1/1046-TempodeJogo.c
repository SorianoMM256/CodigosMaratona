#include <stdio.h>

int main(){
    int horaInicio, horaFinal;

    scanf("%d %d", &horaInicio, &horaFinal);

    if (horaInicio == horaFinal)
        printf("O JOGO DUROU 24 HORA(S)");
    if (horaInicio < horaFinal)
        printf("O JOGO DUROU %i HORA(S)", (horaFinal - horaInicio));
    if (horaInicio > horaFinal)
        printf("O JOGO DUROU %i HORA(S)", (24 - -(horaFinal - horaInicio)));
    printf("\n");
    return 0;
}