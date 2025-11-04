#include <stdio.h>
#include <string.h>

int main()
{
    int casos, pessoas, igual, verifica = 1;
    char idioma1[21], idioma2[21];

    scanf("%d", &casos);

    for (int i = 0; i < casos; i++)
    {

        scanf(" %d", &pessoas);
        scanf(" %s", idioma1);

        for (int i = 1; i < pessoas; i++)
        {
            scanf("%s", idioma2);
            if ((strcmp(idioma2, idioma1)) != 0)
            {
                verifica = 0;
            }
        }
        if (verifica == 1)
        {
            printf("%s\n", idioma1);
        }
        else
        {
            printf("ingles\n");
        }
        verifica = 1;
    }
    return 0;
}