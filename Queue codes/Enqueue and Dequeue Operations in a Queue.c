#include<stdio.h>
#define Max 5

//Structure of a queue.
struct Queue{
int data[Max];
int front;
int rear;
};
struct Queue q; //Initializing a queue.

//Declaring functions.
void ENQUEUE(int n);
void DEQUEUE();
void PRINT();

//Program execution starts from here.
int main(){
q.front = -1;
q.rear = -1;

DEQUEUE();
ENQUEUE(10);
ENQUEUE(20);
ENQUEUE(30);
ENQUEUE(40);
ENQUEUE(50);
ENQUEUE(60);
DEQUEUE();
PRINT();
return 0;
}