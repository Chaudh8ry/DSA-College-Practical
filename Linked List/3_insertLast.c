#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

//--------------------------------LinkedList Traversal Function--------------------------------------
void linkedListTraversal(struct node *head) {
    struct node *temp = head; // Start traversal from the head of the linked list
    while(temp != NULL)
    {
        printf("Element: %d \n",temp -> data);
        temp = temp -> next; //points to the address of next Node
    }
}

//---------------------------------------Insert At Last----------------------------------------------
void insertAtLast(struct node *head){
    struct node *temp = head;
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter item to insert: "); 
    scanf("%d",&newNode -> data);
    newNode -> next = NULL;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newNode;

    linkedListTraversal(head);
}

int main(){

    struct node *head = NULL; // Initialize head to NULL, indicating that it currently does not point to any valid memory location.
    struct node *Node_1 = (struct node *)malloc(sizeof(struct node));
    struct node *Node_2 = (struct node *)malloc(sizeof(struct node));
    struct node *Node_3 = (struct node *)malloc(sizeof(struct node));

    head = Node_1; // This line assigns the address of Node_1 to the pointer head, effectively making head point to the first node in the linked list.

    Node_1 -> data = 2;
    Node_1 -> next = Node_2;

    Node_2 -> data = 4;
    Node_2 -> next = Node_3;

    Node_3 -> data = 6;
    Node_3 -> next = NULL;

    //linkedListTraversal(head);
    insertAtLast(head);
    
    return 0;
}