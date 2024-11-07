#include <stdio.h>
//Array implementation of stack
#define maxsize 50
int top=-1;
int Stack[maxsize];
int pop();
int isEmpty();
int isEmpty(){
    return top == -1;
}
int pop(){
    if (isEmpty()){
        printf("Stack Underflow\n");
        return -1;
    }
    else{
        int x= Stack[top];
        top--;
        return x;
    }
}
int main(){
    int x;
    printf("element popped is:");
    pop();
    printf("%d", x);
}
