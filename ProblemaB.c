#include <stdio.h>

int main () {

    int R, h, r;
    float pi = 3.14;
    float v;

    if (scanf(" %d %d %d", &R, &h, &r) == 3) {
        v = (((pi*h)/3)) * (R*R + R*r + r*r);
        printf("%d\n", (int) v);
    }
    return 0;
}
