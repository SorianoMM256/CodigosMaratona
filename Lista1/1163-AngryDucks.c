#include <stdio.h>
#include <math.h>

double alcance_h0(double v, double theta_deg, double g, double h0, double pi)
{
    double th = theta_deg * pi / 180.0;
    double s = sin(th), c = cos(th);
    return (v * c / g) * (v * s + sqrt(v * v * s * s + 2.0 * g * h0));
}

int main()
{
    double pi = 3.14159, gravidade = 9.80665;
    double altura;
    while ((scanf("%lf", &altura)) == 1)
    {
        double inicio, fim;
        double angulo, velocidade;
        double dist;
        int tentativas;

        scanf("%lf %lf %i", &inicio, &fim, &tentativas);

        for (int i = 0; i < tentativas; i++)
        {
            scanf("%lf %lf", &angulo, &velocidade);
            dist = alcance_h0(velocidade, angulo, gravidade, altura, pi);
            if (dist > inicio && dist < fim)
                printf("%.5lf -> DUCK\n", dist);
            else
                printf("%0.5lf -> NUCK\n", dist);
        }
    }

    return 0;
}