#include <stdio.h>

/*
 * Kritaarth, 1/12/23
 */

int main() {
    int a, b;
    float c, d;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    printf("%d %d\n", a + b, a - b);
    printf("%.1f %.1f\n", c + d, c - d);

    return 0;
}