#include <stdio.h>

int main () {
    int fst, snd;

    if (scanf(" %d %d", &fst, &snd) == 2) {
        if (fst == snd) {
            printf("IGUAIS\n");
        }
        else if (fst > snd) {
            printf("%d\n", fst*fst);
        }
        else {
            printf("%d\n", snd*snd);
        }
    }

    return 0;
}
