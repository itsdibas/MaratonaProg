#include <stdio.h>
#include <stdbool.h>

int main()
{

    int balls[8], sequencia[8], aux, cont;
    bool possivel = true;

    possivel = true;

    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &balls[i]);
        sequencia[i] = -1;
    }

    for (int i = 1; i < 8; i++)
    {
        if (balls[i] == balls[0])
        {
            cont++;
        }
    }
    if (cont > 1)
    {
        aux = balls[7];
        balls[7] = balls[0];
        balls[0] = aux;
    }

    if (balls[6] == balls[7])
    {
        aux = balls[7];
        balls[7] = balls[0];
        balls[0] = aux;
    }

    for (int i = 0; i < 8; i++)
    {
        if (sequencia[i] == -1)
        {
            for (int j = 0; j < 8; j++)
            {
                if ((i == 0) || (sequencia[i - 1] != balls[j] && balls[j] != -1))
                {
                    sequencia[i] = balls[j];
                    balls[j] = -1;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < 8; i++)
    {
        if (balls[i] != -1)
            possivel = false;
    }

    if (possivel)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}