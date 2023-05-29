#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

// Structure to represent the circular queue
typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
} CircularQueue;

// Function to initialize the circular queue
void initialize(CircularQueue* queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Function to check if the circular queue is empty
int isEmpty(CircularQueue* queue) {
    return (queue->front == -1 && queue->rear == -1);
}

// Function to check if the circular queue is full
int isFull(CircularQueue* queue) {
    return ((queue->rear + 1) % MAX_SIZE == queue->front);
}

// Function to enqueue an element into the circular queue
void enqueue(CircularQueue* queue, int value) {
    if (isFull(queue)) {
        printf("Queue is full. Cannot enqueue element.\n");
    } else {
        if (isEmpty(queue)) {
            queue->front = 0;
        }
        queue->rear = (queue->rear + 1) % MAX_SIZE;
        queue->items[queue->rear] = value;
        printf("Enqueued: %d\n", value);
    }
}

// Function to dequeue an element from the circular queue
void dequeue(CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue element.\n");
    } else {
        printf("Dequeued: %d\n", queue->items[queue->front]);
        if (queue->front == queue->rear) {
            // If there is only one element in the queue
            initialize(queue);
        } else {
            queue->front = (queue->front + 1) % MAX_SIZE;
        }
    }
}

// Function to display the elements in the circular queue
void display(CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
    } else {
        printf("Elements in the queue: ");
        int i = queue->front;
        while (i != queue->rear) {
            printf("%d ", queue->items[i]);
            i = (i + 1) % MAX_SIZE;
        }
        printf("%d\n", queue->items[i]);
    }
}

int main() {
    CircularQueue queue;
    initialize(&queue);

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);
    enqueue(&queue, 4);

    display(&queue);

    dequeue(&queue);
    dequeue(&queue);

    display(&queue);

    enqueue(&queue, 5);
    enqueue(&queue, 6);

    display(&queue);

    return 0;
}
