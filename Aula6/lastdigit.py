def ultimo_digito(a, b):
    if b == 0:
        return 1
    ciclo = [a % 10]
    while True:
        proximo_digito = (ciclo[-1] * a) % 10
        if proximo_digito == ciclo[0]:
            break
        ciclo.append(proximo_digito)
    return ciclo[(b-1) % len(ciclo)]

t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    print(ultimo_digito(a, b))