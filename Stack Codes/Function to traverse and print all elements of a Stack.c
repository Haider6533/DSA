void PRINT(){
if(s.top == -1){
printf("Stack is empty\n\n");
return;
}
printf("Elements in the stack:\n");
for(int i=0; i<=s.top; i++){
printf("%d\t", s.data[i]);
if(i==s.top){
printf("\n\n");
}
}
}