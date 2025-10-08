#include <stdio.h>
#include <math.h>

int main () {
    int r;
    double pi = 3.14;
    scanf("%d", &r);
    double s = pi * r * r;
    double c = 2 * pi * r;
    printf("%.4lf %.4f\n", c, s);
}
