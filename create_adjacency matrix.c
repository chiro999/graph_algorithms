#include <stdio.h>
#include <stdlib.h>
#define MAX_NODES 6
/**
 * main - Create a node and Queue struct
 *
 *Return: Void
*/

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