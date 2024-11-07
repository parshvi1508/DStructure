#include <stdio.h>
//Array implementation of stack
#define maxsize 50
int top=-1;
int isFull();
int isFull() {
    return top == maxsize-1;
}
int main(){
    int Stack[maxsize];    
    if (isFull()) {
        printf("The stack is full. Stack Overflow\n");
    } else {
        printf("The stack is not full.\n");
    }
}
