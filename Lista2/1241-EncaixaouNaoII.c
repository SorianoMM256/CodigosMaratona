#include <stdio.h>
#include <string.h>

int main(){
    int casos;

    scanf("%d", &casos);

    for (int i = 0; i < casos; i++){
        int controle = 0;
        int jafoi = 0;
        char n1[1001], n2[1001];

        scanf("%s %s", n1, n2);

        int tamn1 = strlen(n1);
        int tamn2 = strlen(n2);

        if (tamn2 > tamn1){
            printf("nao encaixa\n");
            jafoi = 1;
        }

        for (int j = 0; j < tamn2; j++){
            if (n1[j + tamn1 - tamn2] == n2[j]){
                controle++;
            }
        }

        if (controle == (tamn2))
            printf("encaixa\n");
        else{
            if (jafoi != 1)
                printf("nao encaixa\n");
        }
    }
    return 0;
}