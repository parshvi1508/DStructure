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

int isPalindrome(char str[]) {
    int length = strlen(str);
    int flag = 1;  
    for (int i = 0; i < length; i++) {
        
            push((str[i]));  
        
    }

    for (int i = 0; i < length; i++) {
        
            if (!isEmpty()) {
                char poppedChar = pop(); 
                if ((str[i]) != poppedChar) {
                    flag = 0;  
                    break;
                
            }
        }
    }

    return flag; 
}

int main() {
    char str[100];
    printf("Enter a string to check if it's a palindrome: \n");
    gets(str);  

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
