#include <stdio.h>

int main() {
    double x, y, f;

    scanf("%lf %lf", &x, &y);

    f = (1.0 / (x * y) + 1.0 / (x * x + 1)) * (x + y);

    printf("f(x,y) = %.3f", f);

    return 0;
}