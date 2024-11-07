#include <stdio.h>
#include <string.h>
#include <conio.h>

#define maxsize 50
int top = -1;
char Stack[maxsize];

int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == maxsize - 1;
}

void push(char data) {
    if (isFull()) {
        printf("The stack is full. Stack Overflow\n");
    } else {
        top++;
        Stack[top] = data;
    }
}

char pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return '\0'; 
    } else {
        char x = Stack[top];
        top--;
        return x;
    }
}
