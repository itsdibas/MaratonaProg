MAX_N = 10**5 + 3

m = 0
tem_gato = [False] * MAX_N
lista_adjacencia = [[] for _ in range(MAX_N)]
resultado = 0
maximo_x = [0] * MAX_N
atual = [0] * MAX_N

def dfs(no, pai=0):
    global resultado
    if tem_gato[no]:
        atual[no] = 1 + (atual[pai] if tem_gato[pai] else 0)
    else:
        atual[no] = 0

    maximo_x[no] = max(atual[no], maximo_x[pai])

    eh_folha = True

    for vizinho in lista_adjacencia[no]:
        if vizinho != pai:
            dfs(vizinho, no)
            eh_folha = False

    if eh_folha and maximo_x[no] <= m:
        resultado += 1

if __name__ == "__main__":
    # freopen("in.txt", "r", stdin)

    n, m = map(int, input().split())

    entrada_gatos = list(map(int, input().split()))

    for i in range(1, n+1):
        tem_gato[i] = entrada_gatos[i-1]

    u, v = 0, 0

    for i in range(1, n):
        u, v = map(int, input().split())
        lista_adjacencia[u].append(v)
        lista_adjacencia[v].append(u)

    resultado = 0
    dfs(1)

    print(resultado)
