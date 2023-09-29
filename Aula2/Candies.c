#include <stdio.h>

int main()
{
    long long int n, k = 1, nVasya = 0, nPetya = 0, nOriginal, valorMin;

    scanf("%lld", &n);
    nOriginal = n;

    if (nOriginal % 2 == 1)
    {
        valorMin = (nOriginal / 2) + 1;
    }
    else
    {
        valorMin = nOriginal / 2;
    }

    if (n > 500000000)
    {
        k = 30000000;
    }
    if (n > 500000000000000000)
    {
        k = 39259424579800000;
    }

    while (nVasya < valorMin)
    {
        nVasya = 0;
        nPetya = 0;
        long long int temp = n;

        while (temp > 0)
        {
            if (temp >= k)
            {
                temp = temp - k;
                nVasya += k;
            }
            else
            {
                nVasya += temp;
                temp = 0;
            }

            if (temp >= 10)
            {
                nPetya += (temp / 10);
                temp = temp - (temp / 10);
            }
        }

        if (nVasya < valorMin)
        {
            k++;
        }
    }

    printf("%lld\n", k);
    return 0;
}
