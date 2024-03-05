def dfs(vertex, v, graph, discovered):
    count = 0
    discovered[vertex] = True

    for i in range(v):
        if graph[vertex][i] and not discovered[i]:
            count += dfs(i, v, graph, discovered) + 1

    return count


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        v, a = map(int, input().split())

        graph = [[0] * v for _ in range(v)]
        discovered = [False] * v

        for _ in range(a):
            from_node, to_node = map(int, input().split())
            graph[from_node][to_node] = 1
            graph[to_node][from_node] = 1

        result = dfs(n, v, graph, discovered) * 2
        print(result)


if __name__ == "__main__":
    main()
