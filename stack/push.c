#include <stdio.h>

// Array implementation of stack
#define maxsize 1

int top = -1;     
int Stack[maxsize]; 
int isFull();
void push(int data);

int isFull() {
    return top == maxsize - 1;  
}

void push(int data) {
    if (isFull()) {
        printf("The stack is full. Stack Overflow\n");
    } else {
        top++;
        Stack[top] = data; 
        printf("Element %d has been pushed into the stack.\n", data);
    }
}

int main() {
    int data;
    printf("Enter the element to be pushed into the stack: ");
    scanf("%d", &data);
    push(data); 
    return 0;
    
}
