#include <stdio.h>

int main()
{

    // BankNotes and Coins

    double n;

    scanf("%lf", &n);

    int notas100 = n / 100;

    int notas50 = (n - (notas100 * 100)) / 50;
    int notas20 = (n - (notas100 * 100) - (notas50 * 50)) / 20;
    int notas10 = (n - (notas100 * 100) - (notas50 * 50) - (notas20 * 20)) / 10;
    int notas5 = (n - (notas100 * 100) - (notas50 * 50) - (notas20 * 20) - (notas10 * 10)) / 5;
    int notas2 = (n - (notas100 * 100) - (notas50 * 50) - (notas20 * 20) - (notas10 * 10) - (notas5 * 5)) / 2;
    int moedas1 = (n - (notas100 * 100) - (notas50 * 50) - (notas20 * 20) - (notas10 * 10) - (notas5 * 5) - (notas2 * 2)) / 1;
    int moedas50 = (n - (notas100 * 100) - (notas50 * 50) - (notas20 * 20) - (notas10 * 10) - (notas5 * 5) - (notas2 * 2) - (moedas1 * 1)) / 0.50;
    int moedas25 = (n - (notas100 * 100) - (notas50 * 50) - (notas20 * 20) - (notas10 * 10) - (notas5 * 5) - (notas2 * 2) - (moedas1 * 1) - (moedas50 * 0.50)) / 0.25;
    int moedas10 = (n - (notas100 * 100) - (notas50 * 50) - (notas20 * 20) - (notas10 * 10) - (notas5 * 5) - (notas2 * 2) - (moedas1 * 1) - (moedas50 * 0.50) - (moedas25 * 0.25)) / 0.10;
    int moedas5 = (n - (notas100 * 100) - (notas50 * 50) - (notas20 * 20) - (notas10 * 10) - (notas5 * 5) - (notas2 * 2) - (moedas1 * 1) - (moedas50 * 0.50) - (moedas25 * 0.25) - (moedas10 * 0.10)) / 0.05;
    int moedas01 = (n - (notas100 * 100) - (notas50 * 50) - (notas20 * 20) - (notas10 * 10) - (notas5 * 5) - (notas2 * 2) - (moedas1 * 1) - (moedas50 * 0.50) - (moedas25 * 0.25) - (moedas10 * 0.10) - (moedas5 * 0.05)) / 0.01;

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", notas100);
    printf("%d nota(s) de R$ 50.00\n", notas50);
    printf("%d nota(s) de R$ 20.00\n", notas20);
    printf("%d nota(s) de R$ 10.00\n", notas10);
    printf("%d nota(s) de R$ 5.00\n", notas5);
    printf("%d nota(s) de R$ 2.00\n", notas2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedas1);
    printf("%d moeda(s) de R$ 0.50\n", moedas50);
    printf("%d moeda(s) de R$ 0.25\n", moedas25);
    printf("%d moeda(s) de R$ 0.10\n", moedas10);
    printf("%d moeda(s) de R$ 0.05\n", moedas5);
    printf("%d moeda(s) de R$ 0.01\n", moedas01);

    return 0;
}