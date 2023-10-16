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