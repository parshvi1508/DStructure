#include <stdio.h>
//Array implementation of stack
#define maxsize 50
int top=-1;
int isEmpty();
int isEmpty(){
    return top == -1;
}
int main(){
    int Stack[maxsize];    
    if (isEmpty()) {
        printf("The stack is empty. Stack Underflow\n");
    } else {
        printf("The stack is not empty.\n");
    }
}
