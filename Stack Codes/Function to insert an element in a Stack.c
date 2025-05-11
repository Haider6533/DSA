void PUSH(int n){
if(s.top == Max-1){
printf("Stack is full.\n\n");
return;
}
s.data[++s.top] = n;
printf("%d pushed into the stack\n\n", n);
}