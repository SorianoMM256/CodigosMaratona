#include <stdio.h>
#include <math.h>
int main()
{

    float tempo, velocidadeMedia, result;

    scanf("%f %f", &tempo, &velocidadeMedia);

    result = (tempo * velocidadeMedia) / 12.0;
    printf("%.3f\n", result);
    return 0;
}