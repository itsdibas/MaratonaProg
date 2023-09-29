#include <stdio.h>
#include <stdlib.h>

int n;
int* numeros;

int check(int* numeros, int n, int time) {
    int indAtual = 0;
    int trabAtual = 1;
    for (int i = 0; i < n; i++) {
        if (numeros[i] - numeros[indAtual] > 2 * time) {
            indAtual = i;
            trabAtual++;
        }
    }
    return trabAtual <= 3;
}

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        numeros = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            scanf("%d", &numeros[i]);
        }
        qsort(numeros, n, sizeof(int), compare);
        int esquerdaAtual = 0;
        int direitaAtual = numeros[n - 1];
        while (1) {
            if (esquerdaAtual == direitaAtual) {
                printf("%d\n", esquerdaAtual);
                break;
            }
            if (esquerdaAtual == direitaAtual - 1) {
                if (check(numeros, n, esquerdaAtual)) {
                    printf("%d\n", esquerdaAtual);
                    break;
                } else {
                    printf("%d\n", direitaAtual);
                    break;
                }
            }
            int meioAtual = (esquerdaAtual + direitaAtual) / 2;
            if (check(numeros, n, meioAtual)) {
                direitaAtual = meioAtual;
            } else {
                esquerdaAtual = meioAtual + 1;
            }
        }
        free(numeros);
    }
    return 0;
}
