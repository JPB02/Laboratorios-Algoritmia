#include <stdio.h>
#include <math.h>

int min (int fst, int snd) {
    return (fst < snd) ? fst : snd;
}

int max (int fst, int snd) {
    return (fst > snd) ? fst : snd;
}

int is_triangular (int num) {
    int n, sum = 0;

    if (num < 0) {
        return 0;
    }

    if (num == 0)
        return 1;

    for (n = 1; sum <= num; n++) {
        sum = sum + n;
        if (sum == num) {
            return 1;
        }
    }

    return 0;
}

int is_prime (int num) {
    int i;

    if (num <= 1) {
        return 0;
    }

    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main () {
    int fst, snd;
    if (scanf("%d %d", &fst, &snd) == 2) {

        if (min(fst, snd) >= 1 && max(fst, snd) <= 33554432) {
            int i = fst, n_tri = 0, n_pri = 0;

            while (i <= snd) {
                if (is_triangular(i))
                    n_tri++;
                if (is_prime(i))
                    n_pri++;
                i++;
            }

            printf("%d %d\n", n_tri, n_pri);
        }

    }

    return 0;
}
