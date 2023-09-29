def main():
    while True:
        try:
            n, time = map(int, input().split())
        except EOFError:
            break

        a = [0] * 35
        b = [0] * 35
        min_time = 0
        max_time = 0
        sum_time = 0
        v = []

        for i in range(n):
            a[i], b[i] = map(int, input().split())
            min_time += a[i]
            max_time += b[i]
            v.append(a[i])
            sum_time += a[i]

        if min_time <= time <= max_time:
            print("YES")
            if sum_time < time:
                for i in range(n):
                    df = b[i] - a[i]
                    j = 1
                    while j <= df:
                        if sum_time == time:
                            break
                        sum_time += 1
                        v[i] += 1
                        j += 1

            print(*v)
        else:
            print("NO")


if __name__ == "__main__":
    main()
