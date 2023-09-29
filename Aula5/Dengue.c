#include <stdio.h>

#define MAX 100

int queue[MAX];
int put, take;

void enqueue(int n)
{
	queue[put] = n;
	put = (put + 1) % MAX;
}

int dequeue(void)
{
	int n;

	n = queue[take];
	take = (take + 1) % MAX;
	return n;
}

int main(void)
{
	int graph[MAX][MAX];
	int num_connections[MAX];
	int i, j, k, num, remaining;
	int n = 1;

	while (1) {
		scanf("%d", &num);
		if (num == 0) break;
		printf("Teste %d\n", n++);
		if (num == 1) {
			printf("1\n\n");
			continue;
		}
		for (i = 0; i < num; i++) {
			num_connections[i] = 0;
			for (j = 0; j < num; j++) 
				graph[i][j] = graph[j][i] = 0;
		}
		put = take = 0;
		for (k = 1; k < num; k++) {
			scanf("%d %d", &i, &j);
			i--; j--;
			graph[i][j] = graph[j][i] = 1;
			num_connections[i]++; num_connections[j]++;
		}
		for (i = 0; i < num; i++) 
			if (num_connections[i] == 1) {
				enqueue(i);
			}
		remaining = num;
		while (remaining > 1) {
			k = dequeue();
			remaining--;
			for (i = 0; i < num; i++) 
				if (graph[i][k]) {
					graph[i][k] = graph[k][i] = 0;
					if (--num_connections[i] == 1) {
						enqueue(i);
					}
				}
			
		}
		printf("%d\n\n", 1 + dequeue());
	}
	return 0;
}
