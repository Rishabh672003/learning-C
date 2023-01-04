#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a, b;
    float c, d;
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    printf("%i\n", a + b);
    printf("%i\n", a - b);
    printf("%.1lf\n", c + d);
    printf("%.1lf\n", c - d);

    return 0;
}
