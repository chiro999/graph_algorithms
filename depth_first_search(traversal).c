#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 6

int graph[MAX_NODES][MAX_NODES] = {
    {0, 1, 0, 1, 0, 0},
    {1, 0, 1, 0, 0, 0},
    {0, 1, 0, 0, 0, 1},
    {1, 0, 0, 0, 1, 1},
    {0, 0, 0, 1, 0, 1},
    {0, 0, 1, 1, 1, 0}
};

int visited[MAX_NODES] = {0};

/* Depth-First Search function
 * @param node: The current node being explored
 */
void dfs(int node) {
    /* Mark the current node as visited and print it */
    visited[node - 1] = 1;
    printf("%d ", node);

    /* Explore all neighbors of the current node */
    for (int i = 0; i < MAX_NODES; ++i) {
        /* Check if there is an edge from the current node to node i + 1,
         * and if node i + 1 has not been visited yet */
        if (graph[node - 1][i] == 1 && !visited[i + 1]) {
            /* Recursively call DFS for the unvisited neighbor */
            dfs(i + 1);
        }
    }
}

int main() {
    /* Start DFS from node 1 */
    printf("DFS traversal starting from node 1: ");
    dfs(1);
    printf("\n");

    return 0;
}