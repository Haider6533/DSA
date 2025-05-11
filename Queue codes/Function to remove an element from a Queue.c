void DEQUEUE(){
if(q.rear == q.front){
printf("Queue is empty\n\n");
q.front = -1;
q.rear = -1;
return;
}

int value = q.data[++q.front];
printf("%d removed from the queue\n\n", value);
}\