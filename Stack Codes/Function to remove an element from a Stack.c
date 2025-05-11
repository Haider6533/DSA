void POP(){
if(s.top == -1){
printf("Stack is empty\n\n");
return;
}
int value = s.data[s.top--];
printf("%d removed from the stack\n\n", value);
}