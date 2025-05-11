// 1. Program to implement circular queue and operations on it.

#include <stdio.h>
#define MAX 5

struct Queue {
int data[MAX];
int front;
int rear;
};

struct Queue q = {.front = -1, .rear = -1};

// 1.1. Function to insert element into the circular queue
void ENQUEUE(int value) {
if ((q.rear + 1) % MAX == q.front) {
printf("Queue is full\n");
return;
}

if (q.front == -1) {
q.front = 0;
}

q.rear = (q.rear + 1) % MAX;
q.data[q.rear] = value;

printf("%d inserted into the queue\n", value);
}

// 1.2. Function to remove element from the circular queue
void DEQUEUE() {
if (q.front == -1) {
printf("Queue is empty\n");
return;
}

int value = q.data[q.front];

if (q.front == q.rear) {
// Only one element in queue
q.front = -1;
q.rear = -1;
} else {
q.front = (q.front + 1) % MAX;
}

printf("%d removed from the queue\n", value);
}

// 1.3. Function to display the elements of the queue
void DISPLAY() {
if (q.front == -1) {
printf("Queue is empty\n");
return;
}

printf("Queue elements: ");
int i = q.front;
while (1) {
printf("%d ", q.data[i]);
if (i == q.rear) break;
i = (i + 1) % MAX;
}
printf("\n");
}

// Main function to test the queue
int main() {
ENQUEUE(10);
ENQUEUE(20);
ENQUEUE(30);
ENQUEUE(40);
ENQUEUE(50); // Will say "Queue is full" because one slot is always kept empty.
DISPLAY();
DEQUEUE();
DEQUEUE();
DISPLAY();
ENQUEUE(60);
ENQUEUE(70);
DISPLAY();
return 0;
}