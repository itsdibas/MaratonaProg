#include <stdio.h>
#include <stdlib.h>

int n, m;
int used[20];
int forbidden[20][20];

int calculate(int x)
{
    if (x == n)
        return 1;

    int result = calculate(x + 1);

    int is_okay = 1;
    for (int i = 0; i < 20; ++i)
    {
        if (forbidden[x][i] && used[i])
        {
            is_okay = 0;
            break;
        }
    }

    if (is_okay)
    {
        used[x] = 1;
        result += calculate(x + 1);
        used[x] = 0;
    }

    return result;
}

int main(void)
{
    scanf("%d%d", &n, &m);

    for (int i = 0; i < m; ++i)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        x--;
        y--;
        forbidden[x][y] = 1;
        forbidden[y][x] = 1;
    }

    printf("%d\n", calculate(0) - 1);

    return 0;
}
