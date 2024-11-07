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
int is_balanced(const char* parentheses) {
    int flag = 0; 
    char matching[][2] = {{')', '('}, {'}', '{'}, {']', '['}}; 

    for (int i = 0; parentheses[i] != '\0'; i++) {
        char char_at_i = parentheses[i];
        if (char_at_i == '(' || char_at_i == '{' || char_at_i == '[') {
            push(char_at_i);
        }
       
        else if (char_at_i == ')' || char_at_i == '}' || char_at_i == ']') {
            if (isEmpty()) {
                return flag;
            }
            char top_char = pop();
            for (int j = 0; j < 3; j++) {
                if (char_at_i == matching[j][0] && top_char != matching[j][1]) {
                    return flag; 
                }
            }
        }
    }

    if (isEmpty()) {
        flag = 1; 
    }
    
    return flag;
}

int main() {
    const char* test_string1 = "([{}])";
    const char* test_string2 = "([{}]";
    const char* test_string3 = "{[()]}";

    printf("Is the string '%s' balanced? %s\n", test_string1, is_balanced(test_string1) ? "Yes" : "No");
    printf("Is the string '%s' balanced? %s\n", test_string2, is_balanced(test_string2) ? "Yes" : "No");
    printf("Is the string '%s' balanced? %s\n", test_string3, is_balanced(test_string3) ? "Yes" : "No");

    return 0;
}