from collections import deque

visited = [[False for _ in range(8)] for _ in range(8)]

def main():
    while True:
        posA, posB = input().split()
        movimentos = deque()
        
        for i in range(8):
            for j in range(i, 8):
                visited[i][j] = visited[j][i] = False
            visited[i][i] = False

        x, y, a, b = ord(posA[1]) - 49, ord(posA[0]) - 97, ord(posB[1]) - 49, ord(posB[0]) - 97
        movimentos.append(((x, y), 0))
        visited[x][y] = True

        print(f"To get from {posA} to {posB} takes ", end="")
        
        while movimentos:
            p1, p2 = movimentos[0][0]
            m = movimentos[0][1]
            movimentos.popleft()
            
            if p1 == a and p2 == b and visited[p1][p2]:
                print(f"{m} knight moves.")
                break
            else:
                for i, j in [(1, 2), (2, 1), (1, -2), (2, -1), (-1, -2), (-2, -1), (-1, 2), (-2, 1)]:
                    if 0 <= p1 + i <= 7 and 0 <= p2 + j <= 7 and not visited[p1 + i][p2 + j]:
                        movimentos.append(((p1 + i, p2 + j), m + 1))
                        visited[p1 + i][p2 + j] = True

if __name__ == "__main__":
    main()
