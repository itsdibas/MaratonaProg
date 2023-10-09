#include <stdio.h>

int num[100000];
int N;

int main()
{
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", &num[i]);

    int zeroEsquerda = -1;
    int cincoDireita = -1;
    int zeroCinco = -1;

    for (int i = 0; i < N; i++)
    {
        if (num[i] == 0 && zeroEsquerda == -1)
        {
            zeroEsquerda = i;
        }
        if (num[i] == 5)
        {
            cincoDireita = i;
        }

        if ((num[i] == 5 || num[i] == 0) && zeroCinco == -1)
        {
            zeroCinco = i;
        }
    }


    if (zeroCinco == -1)
    {
        printf("-1\n");
        return 0;
    }

    if (num[N - 1] < 5)
    { 
        if (zeroEsquerda != -1)
        {
            int aux = num[zeroEsquerda];
            num[zeroEsquerda] = num[N - 1];
            num[N - 1] = aux;
        }
        else
        {
            int aux = num[cincoDireita];
            num[cincoDireita] = num[N - 1];
            num[N - 1] = aux;
        }
    }
    else
    { 
        int aux = num[zeroCinco];
        num[zeroCinco] = num[N - 1];
        num[N - 1] = aux;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d", num[i]);
        if (i < N - 1)
            printf(" ");
    }
    printf("\n");

    return 0;
}
