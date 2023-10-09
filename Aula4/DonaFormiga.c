#include <stdio.h>
#include <stdlib.h>

struct Tunel {
    int Cima;
    int Baixo;
};

int max(int a, int b) {
    return a > b ? a : b;
}

int dfs(int salao, struct Tunel *tuneis, int T) {    

    int maxSaloes = 0;

    for (int i = 0; i < T; i++) {
        if (tuneis[i].Cima == salao ) {
            maxSaloes = max(maxSaloes, 1 + dfs(tuneis[i].Baixo, tuneis, T));
        }
    }
    return maxSaloes;
}

int main(void) {
    int S, T, P, altura[200], A, B;
    struct Tunel tuneis[20000];
  
    scanf("%d %d %d", &S, &T, &P);

    for (int i = 1; i <= S; i++) {
        scanf("%d", &altura[i]);
    }

    for (int i = 0; i < T; i++) {
        scanf("%d %d", &A, &B);

        if (altura[A] > altura[B]) {
            tuneis[i].Cima = A;
            tuneis[i].Baixo = B;
        } else {
            tuneis[i].Cima = B;
            tuneis[i].Baixo = A;
        }
    } 
   
    int maxSaloes = dfs(P, tuneis, T);

    printf("%d", maxSaloes);  

    return 0;
}