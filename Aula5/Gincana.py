def busca_em_profundidade(u, visitados, lista_adjacencia):
    visitados[u] = True
    for v in lista_adjacencia[u]:
        if not visitados[v]:
            busca_em_profundidade(v, visitados, lista_adjacencia)

def main():
    n, m = map(int, input().split())
    lista_adjacencia = [[] for _ in range(n)]

    for _ in range(m):
        i, j = map(int, input().split())
        lista_adjacencia[i - 1].append(j - 1)
        lista_adjacencia[j - 1].append(i - 1)

    visitados = [False] * n
    num_times = 0

    for i in range(n):
        if not visitados[i]:
            num_times += 1
            busca_em_profundidade(i, visitados, lista_adjacencia)

    print(num_times)

if __name__ == "__main__":
    main()
