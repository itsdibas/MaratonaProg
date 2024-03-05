MOD = 1000000007

def multiplicar_matrizes(A, B):
    tamanho = len(A)
    resultado = [[0 for _ in range(tamanho)] for _ in range(tamanho)]
    for i in range(tamanho):
        for j in range(tamanho):
            for k in range(tamanho):
                resultado[i][j] = (resultado[i][j] + A[i][k] * B[k][j]) % MOD
    return resultado

def potencia_matriz(matriz, n):
    tamanho = len(matriz)
    resultado = [[0 if linha != coluna else 1 for coluna in range(tamanho)] for linha in range(tamanho)]
    while n > 0:
        if n % 2 == 1:
            resultado = multiplicar_matrizes(resultado, matriz)
        matriz = multiplicar_matrizes(matriz, matriz)
        n //= 2
    return resultado

T = int(input())
for _ in range(T):
    M, N = map(int, input().split())
    matriz = []