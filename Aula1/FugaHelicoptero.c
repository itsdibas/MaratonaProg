#include <stdio.h>
#include <stdlib.h>

int main() {
    int H, P, F, D;
    scanf("%d %d %d %d", &H, &P, &F, &D);

    if (D == -1) {
        if ((P > F && (H > P || H < F)) || (P < F && H > P && H < F)) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    } else {
        if ((P < F && (H < P || H > F)) || (P > F && H < P && H > F)) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}
