#include <stdio.h>
#include <stdlib.h>
#define MAX_NODES 6


struct Node {
    int data;
    struct Node* next;
}

struct Queue {
    struct Node* front;
    struct Node* rear;
}

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
}

struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = queue->rear = NULL;
    return queue;
}

void enqueue(struct Queue* queue, int data) {
    struct Node* newNode = createNode(data);
    if (queue->rear ==NULL){
        queue->front = queue->rear = newNode;
        return;
    }

    queue->rear->next = newNode;
    queue->rear = newNode;
}

int dequeue(struct Queue *queue) {
    if (queue->front == NULL{
        return -1; /*queue is empty*/
    }
    int data = queue->front->data;
    /* tmp points to front*/
    struct Node* temp = queue->front;
      /* move the front pointer*/
    queue->front = queue->front->next;

    if (queue->front == NULL) {
        queue->rear = NULL;
    }

    free(temp); /*dequeue*/
    return data;
}

/* adjacency matrix graph*/
int graph[MAX_NODES][MAX_NODES] = {
    {0, 1, 0, 1, 0, 0},
    {1, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 1, 1},
    {1, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 1, 0}
};

void bfs(int start) {
    /* struct to store the new queue*/
    struct Queue* queue = createQueue();
    int visited[MAX_NODES] = {0};
    /*get the 1st position in the array that is 0*/
    visited[start - 1] = 1;
    enqueue(queue, start);

    /* while queue is not empty print the dequeued elements*/
    while (queue->front != NULL) {
        int current = dequeue(queue);
        printf("%d ", current);
    
    // Iterate through all nodes in the graph
    for (int i = 0; i < MAX_NODES; ++i) {
    /* Check if there is an edge from the current node (current) to node i + 1,
     * and if node i + 1 has not been visited yet */
    if (graph[current - 1][i] == 1 && !visited[i]) {
        /* Mark node i + 1 as visited */
        visited[i] = 1;
        
        /* Enqueue node i + 1 for further exploration */
        enqueue(queue, i + 1);
    }
    
}
}
    free(queue)
}

int main() {
    printf("BFS traversal from node 1:");
    bfs(1);
    printf("\n");

    return 0;
}
