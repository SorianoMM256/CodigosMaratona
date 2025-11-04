#include <stdio.h>

int maiscula(char x){
    if (x >= 'A' && x <= 'Z')
        return 1;
    else
        return 0;
}

int main(){
    long int casos, resultado = 0;
    scanf("%ld", &casos);
    for (long int i = 0; i < casos; i++){
        char entrada[4];
        scanf("%s", entrada);
        int n1 = entrada[0] -= '0';
        int n2 = entrada[2] -= '0';
        if (maiscula(entrada[1])){
            resultado = n2 - n1;
        }else{
            resultado = n1 + n2;
        }
        if (n1 == n2){
            resultado = n1 * n2;
        }
        printf("%ld\n", resultado);
    }

    return 0;
}