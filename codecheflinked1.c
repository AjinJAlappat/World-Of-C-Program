#include <stdio.h>

int main() {
	// your code goes here
	struct node{
	  struct node *next;
	  struct node *prev;
	  int data;
	};
	int testcase,elements;
    scanf("%d",&testcase);
    for(int i=0;i<testcase;i++)
    {
        scanf("%d",&elements);
        struct node *temp,*head,*newnode;
        temp=head;
        int count=1;
        while(temp->next!=NULL)
        {
            newnode=(struct node*)malloc(sizeof(struct node));
            temp->next=newnode;
            scanf("%d",&newnode->data);
            temp=newnode;
            count++;
            if(count==elements)
            {
                temp->next=NULL;
            }
        }
    }
    for(int i=0;i<testcase;i++)
    {
        struct node *temp,*nextnode;
        head=temp=nextnode;
        while(temp->next!=NULL)
        {
            nextnode=temp->next;
            if(temp->data==nextnode->data)
            {
                temp->next=nextnode->next;
                nextnode=nextnode->next;
            }
        }
    }
     for(int i=0;i<testcase;i++)
    {
        struct node *temp;
        head=temp;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            printf("%d",temp->data);
           
        }
    }
}

