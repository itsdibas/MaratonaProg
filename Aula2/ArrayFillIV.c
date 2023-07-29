#include <stdio.h>

int main()
{
    int par[5], impar[5], contPar = 0, contImpar = 0,vetorArmazena[15];

    for(int x = 0; x < 15; x++)
    {
        scanf("%d", &vetorArmazena[x]);
    }

    for (int i = 0; i < 15; i++)
    {
        if (vetorArmazena[i] % 2 == 0)
        {
            if (contPar < 5)
            {
                par[contPar] = vetorArmazena[i];
                contPar++;

            }
            else
            {
                for (int j = 0; j < 5; j++)
                {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                contPar = 0;
                par[contPar] = vetorArmazena[i];
                contPar++;
            }
        }
        else
        {
            if (contImpar < 5)
            {
                impar[contImpar] = vetorArmazena[i];
                contImpar++;
            }
            else
            {
                for (int j = 0; j < 5; j++)
                {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                contImpar = 0;
                impar[contImpar] = vetorArmazena[i];
                contImpar++;
            }
        }
    }

        for(int cont = 0; cont < contImpar; cont++)
        {
            printf("impar[%d] = %d\n", cont, impar[cont]);
        }

        for(int cont = 0; cont < contPar; cont++)
        {
            printf("par[%d] = %d\n", cont, par[cont]);
        }

        return 0;
    }