#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int adj[MAX][MAX];   // Adjacency matrix
int visited[MAX];    // Visited array
int queue[MAX], front = -1, rear = -1;

// BFS Function
void bfs(int start, int n) {
    int i;
    front = rear = 0;
    queue[rear] = start;
    visited[start] = 1;

    printf("BFS Traversal: ");
    while (front <= rear) {
        int node = queue[front++];
        printf("%d ", node);

        for (i = 0; i < n; i++) {
            if (adj[node][i] == 1 && visited[i] == 0) {
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

// DFS Function (Recursive)
void dfs(int start, int n) {
    int i;
    visited[start] = 1;
    printf("%d ", start);

    for (i = 0; i < n; i++) {
        if (adj[start][i] == 1 && visited[i] == 0) {
            dfs(i, n);
        }
    }
}

int main() {
    int n, edges, i, j, u, v, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    // Initialize adjacency matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            adj[i][j] = 0;
        }
    }

    printf("Enter edges (u v):\n");
    for (i = 0; i < edges; i++) {
        scanf("%d%d", &u, &v);
        adj[u][v] = 1;
        adj[v][u] = 1;  // Comment this line for directed graph
    }

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    // BFS
    for (i = 0; i < n; i++)
        visited[i] = 0;
    bfs(start, n);

    // DFS
    for (i = 0; i < n; i++)
        visited[i] = 0;
    printf("DFS Traversal: ");
    dfs(start, n);
    printf("\n");

    return 0;
}
