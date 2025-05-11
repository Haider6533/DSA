void PRINT(){
if(q.front == q.rear){
printf("Queue is empty\n\n");
return;
}
for(int i=q.front+1; i<=q.rear; i++){
printf("%d\t", q.data[i]);
if(i==q.rear){
printf("\n\n");
}
}
}