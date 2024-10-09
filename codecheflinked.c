#include <stdio.h>
#include <stdlib.h>

// Definition of the node structure
struct node {
    struct node *next;
    struct node *prev;
    int data;
};

// Function to create a new node
struct node* createNode(int data) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Function to print the linked list
void printList(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to remove duplicate adjacent nodes
void removeDuplicates(struct node *head) {
    struct node *temp = head;
    while (temp != NULL && temp->next != NULL) {
        if (temp->data == temp->next->data) {
            struct node *duplicate = temp->next;
            temp->next = duplicate->next;
            if (duplicate->next != NULL) {
                duplicate->next->prev = temp;
            }
            free(duplicate);  // Free the duplicate node
        } else {
            temp = temp->next;
        }
    }
}

int main() {
    int testcase, elements, data;
    
    scanf("%d", &testcase);  // Read the number of test cases
    
    for (int i = 0; i < testcase; i++) {
        scanf("%d", &elements);  // Read the number of elements for this test case
        
        struct node *head = NULL, *temp = NULL, *newNode = NULL;
        
        // Creating the doubly linked list
        for (int j = 0; j < elements; j++) {
            scanf("%d", &data);
            newNode = createNode(data);
            if (head == NULL) {
                head = newNode;  // Set the head if this is the first node
            } else {
                temp->next = newNode;
                newNode->prev = temp;
            }
            temp = newNode;
        }
        
        // Removing duplicates from the linked list
        removeDuplicates(head);
        
        // Printing the resulting list
        printList(head);
        
        // Freeing the allocated memory
        temp = head;
        while (temp != NULL) {
            struct node *nextNode = temp->next;
            free(temp);
            temp = nextNode;
        }
    }
    
    return 0;
}
