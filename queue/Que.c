#include <stdio.h>
#include <stlib.h>
#define maxsize 50
#include <conio.h>
int QUEUE[maxsize];
int front=-1,rear=-1;
int isEmpty()
{
    if (front==-1)
    return 1;
    else
    return 0;
}
int isFull(){
    if (rear==maxsize-1)
    return 1;
    else
    return 0;
}
void Enqueue(int Item){
    if(isFull){
    printf("Queue is full");
    exit(1);
    }
    if (isEmpty){
        front=rear=0;
    }
    else{
        rear=rear+1;
    }
    QUEUE[rear]=Item;
}
int Dequeue(){
    if (isEmpty){
        printf("queue is empty. Deletion is not possible");
        exit(1);
    }
    int item=QUEUE[front];
    if (front==rear){
        front=-1;
        rear=-1;
    }
    else
    front=front+1;
    return item;
}
void display(){
    if(!isEmpty()){
        for (int i=front; i<=rear; i++){
            printf("%d", QUEUE[i]);
            printf("\n");
        }
    }
}
int main(){
    while(1){
        
    int choice, item;
    printf("Enter your choice: \n 1.Enqueue \n 2. Dequeue\n 3. Display\n 4. Exit \n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter an element:\n");
        scanf("%d", &item);
        Enqueue(item);
        break;
        case 2:
        Dequeue();
        break;
        case 3:
        display();
        break;
        case 4:
        exit(1);
        default:
        printf("Enter valid choice.\n");

    }
    }
    return 0;
}