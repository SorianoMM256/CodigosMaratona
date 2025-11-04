#include <stdio.h>
#include <string.h>

int main()
{
    int casos, tempo, tempoTotal = 0, certos = 0;
    char problema;
    char validacao[10];

    // para cada problema (A-Z): guarda penalidade e se foi resolvido
    int penalidade[26];
    int resolvido[26];
    int tempoCorreto[26];

    while (scanf("%d", &casos) == 1 && casos != 0)
    {
        // reseta dados do caso
        for (int i = 0; i < 26; i++)
        {
            penalidade[i] = 0;
            resolvido[i] = 0;
            tempoCorreto[i] = 0;
        }
        tempoTotal = 0;
        certos = 0;

        for (int i = 0; i < casos; i++)
        {
            scanf(" %c %d %s", &problema, &tempo, validacao);
            int idx = problema - 'A';

            if (strcmp(validacao, "correct") == 0)
            {
                if (!resolvido[idx])
                { // só conta se não tinha resolvido
                    resolvido[idx] = 1;
                    tempoCorreto[idx] = tempo;
                    certos++;
                }
            }
            else
            { // "incorrect"
                if (!resolvido[idx])
                { // só penaliza se ainda não foi resolvido
                    penalidade[idx] += 20;
                }
            }
        }

        // soma tempo total
        for (int i = 0; i < 26; i++)
        {
            if (resolvido[i])
            {
                tempoTotal += tempoCorreto[i] + penalidade[i];
            }
        }

        printf("%d %d\n", certos, tempoTotal);
    }
    return 0;
}
