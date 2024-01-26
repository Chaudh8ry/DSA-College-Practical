#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *head) {
    struct node *ptr = head; // Start traversal from the head of the linked list
    while(ptr != NULL)
    {
        printf("Element: %d \n",ptr -> data);
        ptr = ptr -> next;
    }
}

int main(){


    struct node *head = NULL; // Initialize head to NULL
    struct node *Node_1 = (struct node *)malloc(sizeof(struct node));
    struct node *Node_2 = (struct node *)malloc(sizeof(struct node));
    struct node *Node_3 = (struct node *)malloc(sizeof(struct node));

    head = Node_1;

    Node_1 -> data = 2;
    Node_1 -> next = Node_2;

    Node_2 -> data = 4;
    Node_2 -> next = Node_3;

    Node_3 -> data = 6;
    Node_3 -> next = NULL;

    linkedListTraversal(head);
    
    printf("Address in head: %p \n", (void *)head);

    free(Node_1);
    free(Node_2);
    free(Node_3);
    return 0;
}

/*
(void *)head is a typecast that explicitly converts the pointer head to type void*, which is what %p expects.

Using (void *) in this context is a common practice to ensure compatibility and consistency when printing addresses using %p. It tells the compiler to interpret the pointer as a generic pointer to memory (void*), which is appropriate for printing addresses.
*/