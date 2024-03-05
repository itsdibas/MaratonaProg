def main():
    testCase = 1
    sev = int(input())
    
    while sev > 0:
        nodes, edges = map(int, input().split())
        a = [['#' for _ in range(nodes)] for _ in range(nodes)]

        for i in range(nodes):
            a[i][0] = chr(i + 97)

        while edges > 0:
            u, p = input().split()
            z, Z = ord(u) - 97, ord(p) - 97
            a[z][Z] = p
            a[Z][z] = u
            edges -= 1

        print(f"Case #{testCase}:")
        v = [-1] * nodes
        Count = 0

        for i in range(nodes):
            line = False
            t = []
            if v[i] == -1:
                t.append(chr(i + 97))
                Count += 1
                v[i] = 1
                line = True

            Copy = []
            CP = 0

            while t:
                d = t.pop()
                if CP != 0:
                    Copy.append(d)
                else:
                    print(d, end=",")
                CP += 1

                for j in range(nodes):
                    if a[ord(d) - 97][j] != '#':
                        if v[ord(a[ord(d) - 97][j]) - 97] == -1:
                            line = True
                            v[ord(a[ord(d) - 97][j]) - 97] = 1
                            t.append(a[ord(d) - 97][j])

            s = sorted(Copy)
            for i in range(len(s)):
                print(s[i], end=",")
                
            if line:
                print()

        print(f"{Count} connected components\n")
        testCase += 1
        sev -= 1


if __name__ == "__main__":
    main()
