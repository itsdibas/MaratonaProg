#include <stdio.h>
#include <string.h>

const int N = 205;
int t, g[26][26];
int vis[26];
char s[205];

void dfs(int u) {
    printf("%c", u + 'a');
    for (int j = 0; j < 26; j++) {
        if (g[u][j] && !vis[j]) {
            vis[j] = 1;
            dfs(j);
        }
    }
}

int main() {
    scanf("%d", &t);
    while (t--) {
        memset(vis, 0, sizeof(vis));
        memset(g, 0, sizeof(g));
        scanf("%s", s);
        int n = strlen(s);
        if (n == 1) {
            printf("YES\n");
            for (int i = 0; i < 26; i++) {
                if (!vis[i]) {
                    printf("%c", i + 'a');
                }
            }
            printf("\n");
            continue;
        }
        for (int i = 0; i < n - 1; i++) {
            int u = s[i] - 'a', v = s[i + 1] - 'a';
            if (g[u][v]) continue;
            g[u][v] = g[v][u] = 1;
        }
        int du1 = -1, du3 = -1;
        for (int i = 0; i < 26; i++) {
            int du = 0;
            for (int j = 0; j < 26; j++) {
                if (g[i][j]) du++;
            }
            if (du >= 3) du3 = i;
            else if (du == 1) du1 = i;
        }
        if (du3 != -1 || du1 == -1) {
            printf("NO\n");
        } else {
            printf("YES\n");
            vis[du1] = 1;
            dfs(du1);
            for (int i = 0; i < 26; i++) {
                if (!vis[i]) {
                    printf("%c", i + 'a');
                }
            }
            printf("\n");
        }
    }
    return 0;
}
