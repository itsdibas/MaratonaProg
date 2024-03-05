#include <stdio.h>

typedef long long ll;

int prime(ll l) {
    if (l == 1) return 0;
    for (ll i = 2; i * i <= l; i++) {
        if (l % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    ll t;
    scanf("%lld", &t);
    while (t--) {
        ll n, m;
        scanf("%lld %lld", &n, &m);
        for (ll i = n; i <= m; i++) {
            if (prime(i)) {
                printf("%lld\n", i);
            }
        }
        printf("\n");
    }
    return 0;
}
