void ENQUEUE(int n){
if(q.rear == Max-1){
printf("Queue is full\n\n");
return;
}
q.data[++q.rear] = n;
printf("%d inserted in the queue\n\n", n);
}