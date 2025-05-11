#include<stdio.h>
#include<stdlib.h>
//Structure of a Node.
struct Node{
int data;
struct Node* next;
};
//Declaring functions.
void insertAtBeginning(Node** pointerToHead, int x);
void insertAtEnd(Node** pointerToHead, int x);
void insertAt(Node** pointerToHead, int pos, int x);
void deleteFromFirst(Node** pointerToHead);
void deleteFromEnd(Node** pointerToHead);
void deleteFrom(Node** pointerToHead, int pos);
void Print(Node* head);
//Execution of program starts from here.
int main(){
struct Node* head = NULL;
insertAtEnd(&head, 20);
insertAtBeginning(&head, 10);
insertAtBeginning(&head, 30);
insertAt(&head, 1, 70);
insertAt(&head, 4, 80);
insertAt(&head, 5, 90);

insertAtEnd(&head, 100);
deleteFrom(&head, 1);
deleteFrom(&head, 4);
deleteFrom(&head, 5);
deleteFromFirst(&head);
deleteFromEnd(&head);
Reverse(&head);
Print(head);
}
// 1.1. Insert a node at the beginning.
void insertAtBeginning(Node** pointerToHead, int x){
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode -> data = x;
newNode -> next = *pointerToHead;
*pointerToHead = newNode;
}
// 1.2. Insert a node at the end.
void insertAtEnd(Node** pointerToHead, int x){
struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
newNode -> data = x;
newNode -> next = NULL;
if(*pointerToHead == NULL){
*pointerToHead = newNode;
}
else{
struct Node* endNode = *pointerToHead;
while(endNode -> next != NULL){
endNode = endNode -> next;
}
endNode -> next = newNode;
}
}
// 1.3. Insert a node at nth position.
void insertAt(Node** pointerToHead, int pos, int x){
if(pos<1){
printf("Invalid Position\n");
return;
}

struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode -> data = x;
if(pos == 1){
newNode -> next = *pointerToHead;
*pointerToHead = newNode;
return;
}
struct Node* current = *pointerToHead;
for(int i=1; i<pos-1 && current!=NULL; i++){
current = current -> next;
}
if(current == NULL){
printf("Invlalid position\n");
free(newNode);
return;
}
newNode -> next = current -> next;
current -> next = newNode;
}
// 1.4. Delete a node from nth position.
void deleteFrom(Node** pointerToHead, int pos){
if(*pointerToHead == NULL || pos<1){
printf("Invalid position or empty list\n");
return;
}
if(pos == 1){
Node* temp = *pointerToHead;
*pointerToHead = (*pointerToHead)-> next;
free(temp);
return;
}
Node* current = *pointerToHead;
for(int i=1; i<pos-1 && current != NULL; i++){
current = current -> next;
}
if(current == NULL || current -> next == NULL){

printf("Invalid position\n");
return;
}
Node* temp = current -> next;
current -> next = current -> next -> next;
free(temp);
}
// 1.5. Delete a node from first position.
void deleteFromFirst(Node** pointerToHead){
if(*pointerToHead == NULL){
printf("List is empty\n");
return;
}
Node* temp = *pointerToHead;
*pointerToHead = (*pointerToHead) -> next;
free(temp);
}
// 1.6. Delete a node from the end.
void deleteFromEnd(Node** pointerToHead){
if(*pointerToHead == NULL){
printf("List is empty\n");
return;
}
if((*pointerToHead)-> next == NULL){
*pointerToHead = NULL;
return;
}
Node* endNode = *pointerToHead;
while(endNode -> next -> next != NULL){
endNode = endNode -> next;
}
Node* temp = endNode -> next;
endNode -> next = NULL;
free(temp);
}
// 1.7. Print the list.
void Print(Node* head){

while(head != NULL){
printf("%d\t", head -> data);
head = head -> next;
}
printf("\n");
}