#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

//--------------------------------LinkedList Traversal Function--------------------------------------
void linkedListTraversal()
{
    struct node *temp = head; // Start traversal from the head of the linked list
    while (temp != NULL)
    {
        printf("Element: %d \n", temp->data);
        temp = temp->next; // points to the address of next Node
    }
}

//------------------------------------Insert At Begining--------------------------------------------
void insertAtBegin()
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node)); // New Node is created to insert at begining
    if (newNode == NULL)
    {
        printf("Memory allocation failed. Exiting.\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        printf("Enter The data You want to Insert: ");
        scanf("%d", &newNode->data); 
        newNode->next = head;        
        head = newNode;              
        printf("\n Node Inserted at Begining \n");
    }
}

int main()
{
    int choice;
    printf("\n 1.Insert in begining\n 2.Insert at last\n 3.Insert at any random location\n 4.Delete from Beginning\n 5.Delete from last\n 6.Delete node after specified location\n 7.Search for an element\n 8.Show\n 9.Exit\n");
    printf("\nEnter your choice?\n");
    scanf("\n%d", &choice);

    switch (choice)
    {
    case 1:
        insertAtBegin();
        break;
    case 8:
        linkedListTraversal();
        break;
    case 9:
        exit(0);
        break;
    default:
        printf("Please Enter a Valid Choice");
    }

    
    // printf("Address in head: %p \n", (void *)head);

    return 0;
}