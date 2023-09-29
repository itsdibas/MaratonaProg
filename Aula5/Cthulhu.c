#include <stdio.h>

int par[102];

int encontrar(int x) {
    if (par[x] == x) return x;
    return par[x] = encontrar(par[x]);
}

void unir(int x, int y) {
    x = encontrar(x);
    y = encontrar(y);
    if (x != y) par[x] = y;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < 101; i++) {
        par[i] = i;
    }

    for (int i = 0; i < m; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        unir(x, y);
    }

    int a = 1;

    for (int i = 2; i <= n; i++) {
        if (encontrar(1) != encontrar(i)) {
            a = 0;
        }
    }

    if (n != m) {
        a = 0;
    }

    if (a) {
        printf("FHTAGN!\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
