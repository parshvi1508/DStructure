#include <stdio.h>
//Array implementation of stack
#define maxsize 50
int top=-1;
int Stack[maxsize];
int peek();
int isEmpty();
int isEmpty(){
    return top == -1;
}
int peek(){
    if (isEmpty()){
        printf("Stack Underflow. \n");
    }
    else{
        int x=Stack[top];
        return x;
    }
}
int main(){
    int z;
    z=peek();
    printf("Top of stack is: %d", z);
}