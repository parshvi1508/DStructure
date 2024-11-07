#include <stdio.h>
//Array implementation of stack
#define maxsize 50
int top=-1;
int Stack[maxsize];
int isEmpty();
int isEmpty(){
    return top == -1;
}
int isFull();
int isFull() {
    return top == maxsize-1;
}
void push(int data);
void push(int data) {
    if (isFull()) {
        printf("The stack is full. Stack Overflow\n");
    } else {
        top++;
        Stack[top] = data; 
        printf("Element %d has been pushed into the stack.\n", data);
    }
}
int pop();
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
int peek();
int peek(){
    if (isEmpty()){
        printf("Stack Underflow. \n");
    }
    else{
        int x=Stack[top];
        return x;
    }
}
void display();
void display(){
    if (!isEmpty){
        for(int i=top; i>=0; i--){
            printf("%d", Stack[i]);
        }
    }
}
int main(){
    int choice, x,data,z,c;
    printf("\n Enter your choice:\n 1.Check if stack is empty\n 2. Check if Stack is full\n 3.Push an element into the stack\n 4. Pop the top element.\n 5. Get the element at peek. \n6.Display elements of stack\n");
    scanf("%d",&choice);
    do{
        switch(choice){
            case 1:
                if (isEmpty()){
                    printf("The stack is empty.\n Stack Underflow");
                }
                else{
                    printf("The stack is not empty\n");
                }
                break;
            case 2:
                    if (isFull()) {
                printf("The stack is full. Stack Overflow\n");
            } else {
                printf("The stack is not full.\n");
            }
            break;
    case 3:
        printf("Enter the element to be pushed into the stack: \n");
        scanf("%d", &data);
        push(data); 
        return 0;
        break;
    case 4:
        printf("element popped is:");
        pop();
        printf("%d\n", x);
        break;
    case 5:
        z=peek();
        printf("Top of stack is: %d\n", z);
        break;
    case 6:
        display();
        break;
    default: printf("Invalid choice\n");
        }
    printf("Do you want to continue? Press 1\n");
    scanf("%d", c);
    }
    while (c==1);
    return 0;
}