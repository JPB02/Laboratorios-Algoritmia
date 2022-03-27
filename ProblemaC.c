#include <stdio.h>

int is_factorial (int n) {
    int m, t;
    m = 1, t = 1;

    while (t <= n) {
        if (t == n) {
            return 1;
        }
        t = t * m;
        m++;
    }
    return 0;
}

int main () {
    int fst, snd, trd, tmp;

    if (scanf("%d %d %d", &fst, &snd, &trd) == 3) {

        // Sorting the numbers in increasing order.
        if (fst > trd) {
            tmp = fst;
            fst = trd;
            trd = tmp;
        }

        if (fst > snd) {
            tmp = fst;
            fst = snd;
            snd = tmp;
        }

        if (snd > trd) {
            tmp = snd;
            snd = trd;
            trd = tmp;
        }

        if (is_factorial(trd)) {
            printf("FATORIAL\n");
        }
        else {
            printf("%d %d %d\n", fst, snd, trd);
        }
    }

    return 0;
}