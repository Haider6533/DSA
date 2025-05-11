#include<stdio.h>
#define Max 5 //Max size of the stack.

//Structure of the stack.
struct Stack{
int data[Max];
int top;
};
struct Stack s; //Initializing the stack.

//Declaring Functions
void PUSH(int n);
void POP();
void PRINT();

//Program execution starts from here.
int main(){
s.top = -1;
POP();
PUSH(10);
PUSH(20);

PUSH(30);
PUSH(40);
PUSH(50);
PUSH(60);
POP();
PRINT();
return 0;
}