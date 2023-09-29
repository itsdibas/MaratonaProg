#include <stdio.h>

int main()
{

    int n, A[100], nA = 0, somaA = 0, B[100], nB = 0, somaB = 0, entrada, somaMax;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &entrada);
        if (entrada >= 0)
        {
            A[nA] = entrada;
            nA++;
        }
        else
        {
            B[nB] = entrada;
            nB++;
        }
    }

    if (nA != 0)
    {
        for (int j = 0; j < nA; j++)
        {
            somaA += A[j];
        }
    }

    if (nB != 0)
    {
        for (int k = 0; k < nB; k++)
        {
            somaB += B[k];
        }
    }

    somaMax = somaA - somaB;
    printf("%d\n", somaMax);
}