#include <stdio.h>
#include <math.h> 
int main() {
 
    double total;
    int notas[6] = {100, 50, 20, 10, 5, 2};
    int moedas[6] = {100, 50, 25, 10, 5, 1};
    int temp;
    float escreverMoedas;
    
    scanf(" %lf", &total);
    
    printf("NOTAS:\n");
    for(int i = 0; i < 6; i++){
        temp = total / notas[i];
        printf("%i nota(s) de R$ %i.00\n", temp, notas[i]);
        total = total -(notas[i] * temp);
    }
    
    total *= 100;
    printf("MOEDAS:\n");
    
    for(int i = 0; i < 6; i++){
        temp = total / moedas[i];
        escreverMoedas = moedas[i] / 100.0;
        printf("%i moeda(s) de R$ %.2f\n", temp,escreverMoedas);
        total = total -(moedas[i] * temp);
    }
    
    return 0;
}#include <stdio.h>
#include <math.h> 
int main() {
    double total;
    int notas[6] = {100, 50, 20, 10, 5, 2};
    int moedas[6] = {100, 50, 25, 10, 5, 1};
    int temp;
    float escreverMoedas;
    
    scanf(" %lf", &total);
    
    printf("NOTAS:\n");
    for(int i = 0; i < 6; i++){
        temp = total / notas[i];
        printf("%i nota(s) de R$ %i.00\n", temp, notas[i]);
        total = total -(notas[i] * temp);
    }
    
    total *= 100;
    printf("MOEDAS:\n");
    
    for(int i = 0; i < 6; i++){
        temp = total / moedas[i];
        escreverMoedas = moedas[i] / 100.0;
        printf("%i moeda(s) de R$ %.2f\n", temp,escreverMoedas);
        total = total -(moedas[i] * temp);
    }
    
    return 0;
}