#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

//--------------------------------LinkedList Traversal Function-----------------------------------------
void linkedListTraversal(struct node *head) {
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("Element: %d \n",temp -> data);
        temp = temp -> next;
    }
}

//-----------------------------Count Length-----------------------
int lengthLL(struct node *head){
    struct node *temp = head;
    int count = 0;
    while(temp != NULL){
        temp = temp -> next;
        count++;
    }
    return count;
}

//--------------------------------Inserting at a Particular Location-----------------------------------------
void insertAtParticular(struct node *head){
    int length = lengthLL(head);
    int pos;
    printf("Enter Place to Insert the Node: ");
    scanf("%d",&pos);
    if(pos>length){
        printf("Invalid Position \n");
    }
    else{
        struct node *newNode = (struct node*)malloc(sizeof(struct node));
        int i = 1; // 'i' here represent the position of linked list
        struct node *temp = head;
        while(i < pos){
            temp = temp -> next;
            i++;
        }
        printf("Enter data: ");
        scanf("%d",&newNode -> data);
        
        newNode -> next = temp -> next;
        temp -> next = newNode;
    }

    linkedListTraversal(head);
}

int main(){

    struct node *head = NULL;
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

    // linkedListTraversal(head);
    insertAtParticular(head);
    return 0;
}