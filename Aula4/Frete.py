import heapq

def dijkstra(graph, start):
    n = len(graph)
    distances = [float('inf')] * n
    distances[start] = 0
    visited = [False] * n
    heap = [(0, start)]
    
    while heap:
        dist, node = heapq.heappop(heap)
        if visited[node]:
            continue
        visited[node] = True
        
        for neighbor, cost in graph[node]:
            if distances[node] + cost < distances[neighbor]:
                distances[neighbor] = distances[node] + cost
                heapq.heappush(heap, (distances[neighbor], neighbor))
    
    return distances

def main():
    N, M = map(int, input().split())
    graph = [[] for _ in range(N)]
    
    for _ in range(M):
        A, B, C = map(int, input().split())
        graph[A - 1].append((B - 1, C))
        graph[B - 1].append((A - 1, C))
    
    distances = dijkstra(graph, 0)
    print(distances[N - 1])

if __name__ == "__main__":
    main()
