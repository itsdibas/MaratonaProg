#include <stdio.h>
#include <stdlib.h>

int main()
{
    // FIBONACCI

    int n, i, a = 1, b = 1, c = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
    {

        c = a + b;
        a = b;
        b = c;
    }

    printf("%d\n", a);
    return 0;
}