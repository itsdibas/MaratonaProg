def pode_reordenar_love_mobiles(n, ordem):
    ordem_esperada = 1
    rua_lateral = []

    for caminhao in ordem:
        while rua_lateral and rua_lateral[-1] == ordem_esperada:
            rua_lateral.pop()
            ordem_esperada += 1

        if caminhao == ordem_esperada:
            ordem_esperada += 1
        else:
            rua_lateral.append(caminhao)

    while rua_lateral and rua_lateral[-1] == ordem_esperada:
        rua_lateral.pop()
        ordem_esperada += 1

    return ordem_esperada - 1 == n

def main():
    while True:
        n = int(input())
        if n == 0:
            break

        ordem = list(map(int, input().split()))
        resultado = pode_reordenar_love_mobiles(n, ordem)

        print("yes" if resultado else "no")

if __name__ == "__main__":
    main()
