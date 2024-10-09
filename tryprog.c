#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node* next;
    struct node* prev;
    int data;
};

struct node* createnode(int val)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}

struct node                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
int main()
{
    int testcase,elements,data;
    scanf("%d",&testcase);

    for(int i=0;i<testcase;i++)
    {
        scanf("%d",&elements);
        struct node* head=NULL,*temp=NULL,*newnode=NUL;

        for(int i=0;i<elements;i++)
        {
            scanf("%d",&data);
            newnode=createnode(data);
        }
    }

    void duplicates ()
}