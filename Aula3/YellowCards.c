#include <stdio.h>

int main() {
    int a1, a2, k1, k2, n;
    scanf("%d %d %d %d %d", &a1, &a2, &k1, &k2, &n);
    int min, max;
    int m = a1 * (k1 - 1) + a2 * (k2 - 1);
    if (n <= m)
        min = 0;
    else
        min = n - m;
    if (k1 > k2) {
        int temp = k1;
        k1 = k2;
        k2 = temp;
        temp = a1;
        a1 = a2;
        a2 = temp;
    }
    if (a1 * k1 < n)
        max = a1 + (n - a1 * k1) / k2;
    else
        max = n / k1;
    printf("%d %d\n", min, max);
    return 0;
}
