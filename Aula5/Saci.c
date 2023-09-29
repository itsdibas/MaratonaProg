#include <stdio.h>

int matriz[1123][1123];
int desloc_x[4] = {1, -1, 0, 0};
int desloc_y[4] = {0, 0, 1, -1};

int main(void)
{
    int linhas, colunas, posX, posY, resposta = 0;
    scanf("%d %d", &linhas, &colunas);
    for (int i = 1; i <= linhas; i++)
        for (int j = 1; j <= colunas; j++)
        {
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] == 3)
                posX = i, posY = j;
        }

    while (matriz[posX][posY] != 2)
        for (int i = 0; i < 4; i++)
            if (matriz[posX + desloc_x[i]][posY + desloc_y[i]])
            {
                resposta++, matriz[posX][posY] = 0, posX += desloc_x[i], posY += desloc_y[i];
                break;
            }
    printf("%d\n", resposta + 1);

    return 0;
}
