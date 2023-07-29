def main():
    n = int(input())

    consultas = []
    for _ in range(n):
        inicio, fim = map(int, input().split())
        consultas.append((inicio, fim))

    consultas.sort(key=lambda x: x[1])

    max_consultas = 0
    ultimo_fim = 0

    for consulta in consultas:
        inicio, fim = consulta
        if inicio >= ultimo_fim:
            max_consultas += 1
            ultimo_fim = fim

    print(max_consultas)

if __name__ == "__main__":
    main()
