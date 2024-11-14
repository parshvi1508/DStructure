#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node* next;
};
struct node* start=NULL; //global
struct node* createNode()
{
    struct node *p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void InsertBeginning(int item)
{
    struct node*p=createNode();
    p->info=item;
    p->next=start;
    start=p;
}
void insertEnd(int item)
{
    struct node*p=createNode();
    p->info=item;
    p->next=NULL;
    if (start==NULL)
        start=p;
    else{
    struct node*temp=start;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=p;
    }
}
void insertAfter(struct node*Q, int item)
{
    if (Q==NULL)
    {
        printf("Void insertion");
        exit(1);
    }
    struct node*p=createNode();
    p->info=item;
    p->next=Q->next;
    Q->next=p;
}
void Traversal()
{
    if (start!=NULL)
    {
        struct node* temp=start;
        while(temp!=NULL)
        {
            printf("%d->",temp->info);
            temp=temp->next;
        }
        printf("NULL\n");
    }

}
int main()
{
    insertEnd(1);
    insertEnd(2);
    insertEnd(3);
    insertEnd(4);
    insertEnd(5);
    insertEnd(6);
    insertEnd(7);
    insertEnd(8);
    Traversal();
    return 0;
}