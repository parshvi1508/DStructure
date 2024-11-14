#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node* next;
};
struct node* start=NULL;
struct node* createnode(){
    struct node*p=(struct node*) malloc(sizeof(struct node));

    return p;
}
void insetbegining(int item){
    struct node*p=createnode();
    p->info=item;
    p->next=start;
    start=p;
    
}
void insertend(int item){
    struct node* p=createnode();
    p->info=item;
    p->next=NULL;
    if(start==NULL)
    start=p;
    else{
    struct node* temp=start;
    while(temp->next!=NULL){
        temp=temp->next;
        
    }
    temp->next=p;
    }
}
void insertafter(struct node* q,int item){
    if(q==NULL){
        printf("void insertiom");
        exit(1);
    }
    struct node* p=createnode();
    p->info=item;
    p->next=q->next;
    q->next=p;
}
void traversal()
{
    if(start!=NULL){
        struct node* temp=start;
        while(temp!=NULL){
            printf("%d->",temp->info);
            temp=temp->next;
            
        }
        printf("NULL\n");
    }
}
int main()
{
    int x,y;
    insertend(1);
    insertend(2);
    insertend(3);
    insertend(4);
     traversal();
    printf("enter data and node after whaich you want to insert\n");
    scanf("%d%d",&x,&y);
    struct node* temp=start;
    while(temp!=NULL)
    {
        if(temp->info==y)
        break;
    temp=temp->next;    
    }
    if(temp!=NULL)
    insertafter(temp,x);
    traversal();
    return 0;
}