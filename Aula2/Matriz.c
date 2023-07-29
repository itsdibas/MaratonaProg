#include <stdio.h>

int calcularDigitos(int x) {
    int temp = x;
    int count = 0;
    while (temp) {
        temp /= 10;
        count++;
    }
    return count;
}

int main() {
    int indiceExterno = 0, indiceInterno = 0, tamanho, tempA, tempB, potencia = 1, tempX, tempY = 0, ultimoIndice, digitos, tempE = 0, tempF, tempG, tempH;
    while (1) {
        scanf("%d", &tamanho);
        if (tamanho == 0)
            break;
        else {
            int matriz[tamanho][tamanho];
            ultimoIndice = tamanho - 1;
            for (tempX = 0, potencia = 1, tempY = 0; tempX < tamanho; tempX++) {
                for (tempA = tempY, tempB = 0; tempA >= 0; tempA--, tempB++)
                    matriz[tempA][tempB] = potencia;
                tempY++;
                potencia *= 2;
            }
            for (tempX = 1, tempY = 1; tempX < tamanho; tempX++) {
                for (tempA = ultimoIndice, tempB = tempY; tempB <= ultimoIndice; tempA--, tempB++)
                    matriz[tempA][tempB] = potencia;
                tempY++;
                potencia *= 2;
            }
            digitos = calcularDigitos(matriz[ultimoIndice][ultimoIndice]);
            for (indiceExterno = 0; indiceExterno < tamanho; indiceExterno++) {
                for (indiceInterno = 0; indiceInterno < tamanho; indiceInterno++) {
                    if (indiceInterno == 0) {
                        tempH = matriz[indiceExterno][indiceInterno];
                        tempE = calcularDigitos(tempH);
                        tempG = digitos - tempE;
                        for (tempF = 1; tempF <= tempG; tempF++)
                            printf(" ");
                        printf("%d", matriz[indiceExterno][indiceInterno]);
                    } else {
                        tempH = matriz[indiceExterno][indiceInterno];
                        tempE = calcularDigitos(tempH);
                        tempG = digitos - tempE;
                        for (tempF = 1; tempF <= tempG; tempF++)
                            printf(" ");
                        printf(" %d", matriz[indiceExterno][indiceInterno]);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}
