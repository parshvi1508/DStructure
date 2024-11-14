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
int deleteBeginning()
{
    if (start==NULL)
        printf("Void deletion");
    else
    {
        int item=start->info;
        struct node*p=start;
        start=start->next;
        free(p);
        return item;
    }
}
int deleteEnd()
{
    
}
int main()
{
    insertend(1);
    insertend(2);
    insertend(3);
    insertend(4);
    traversal();
    int x; int y;
    printf("Enter the data and the node after which you want to insert\n");
    scanf("%d %d", &x,&y);
    struct node*temp=start;
    while (temp!=NULL)
    {
        if (temp->info==y)
        break;
        temp=temp->next;
    }
    if(temp!=NULL)
        insertafter(temp,x);
    traversal();
    int item=deleteBeginning();
    printf("%d deleted successfully.\n", item);
    traversal();
    return 0;
}