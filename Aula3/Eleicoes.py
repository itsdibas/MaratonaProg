def main():
    n = int(input())

    votos = {}

    for i in range(n):
        entrada = int(input())
        votos[entrada] = votos.get(entrada, 0) + 1

    maiorVotos = 0
    vencedor = -1

    for candidato, num_votos in votos.items():
        if num_votos > maiorVotos:
            maiorVotos = num_votos
            vencedor = candidato

    print(vencedor)

if __name__ == "__main__":
    main()
