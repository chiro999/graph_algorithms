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