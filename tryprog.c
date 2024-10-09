#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node* next;
    struct node* prev;
    int data;
};

struct node* createnode(int val) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newnode->data = val;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

void display(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int testcase, elements, data;
    scanf("%d", &testcase);

    for (int i = 0; i < testcase; i++) {
        scanf("%d", &elements);
        struct node* head = NULL;
        struct node* temp = NULL;
        struct node* newnode = NULL;

        for (int j = 0; j < elements; j++) {
            scanf("%d", &data);
            newnode = createnode(data);
            if (head == NULL) {
                head = newnode;
                temp = head;
            } else {
                temp->next = newnode;
                newnode->prev = temp;
                temp = newnode;
            }
        }
        display(head);
    }

    return 0;
}
