#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

// traversal
void linkedlistTraversal(struct node *head){
    struct node *temp = head;
    while(temp != NULL){
        printf("Element : %d",temp -> data);
        temp = temp -> next;
    }
}
// insert first
void InsertFirst(struct node *head){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: \n");
    scanf("%d",&newNode -> data);
    newNode -> next = head;
    head = newNode;
    linkedlistTraversal(head);
}
// Insert Last
void InsertLast(struct node *head){
    struct node *newNode = (struct node*)malloc(sizeof(struct node*));
    struct node *temp = head;
    printf("Enter data: \n");
    scanf("%d",&newNode -> data);
    newNode -> next = NULL;    
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newNode;
        linkedlistTraversal(head);
}

// Len. of Linked List
int countLen(struct node *head){
    int count = 0;
    while(head -> next != NULL){
        count++;
    }
    return count;
}

// Insert At particular place
void particularInsert(struct node *head){
    int Length = countLen(head);
    int pos;
     printf("Enter Place to Insert the Node: ");
    scanf("%d",&pos);
    if(pos>Length){
        printf("Invalid Position");
    }
    else{
        struct node *newNode = (struct node*) malloc(sizeof(struct node));
        int i =1;
        struct node *temp = head;
        while(i<pos){
            temp = temp -> next;
            i++;
        }
        printf("Enter data: ");
        scanf("%d",&newNode -> data);

        newNode -> next = temp -> next;
        temp -> next = newNode;
    }
}
int main(){
    struct node *head = NULL;
    struct node *Node1 = (struct node *)malloc(sizeof(struct node));
    struct node *Node2 = (struct node *)malloc(sizeof(struct node));
    struct node *Node3 = (struct node *)malloc(sizeof(struct node));
    
    head = Node1;

    Node1 -> data = 24;
    Node1 -> next = Node2;
    Node2 -> data = 25;
    Node2 -> next = Node3;
    Node3 -> data = 26;
    Node3 -> next = NULL;

    // InsertFirst(head);   
    InsertLast(head);
    return 0;
}