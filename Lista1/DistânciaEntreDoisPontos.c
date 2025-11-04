#include <stdio.h>
#include <math.h>
int main(){

    double x1, x2, y1, y2;
    double result;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    result = sqrt((pow(x2 - x1, 2.0)) + (pow(y2 - y1, 2.0)));
    printf("%.4lf\n", result);
    return 0;
}