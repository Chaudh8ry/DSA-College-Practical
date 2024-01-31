#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *head){
    struct node *temp = head;
    while(temp != NULL){
        printf("Element of Linked List: %d \n",temp -> data);
        temp = temp -> next;
    }
}

void deleteEnd(struct node *head){
    if(head == NULL){
        printf("Deletion NOT possible No Elements present");
    }
    else{
        struct node *prevNode;
        struct node *temp = head; 
        while(temp -> next != NULL){
            prevNode = temp;
            temp = temp -> next;
        }
        if(temp == head){
            head = NULL;
        }
        else{
            prevNode -> next = NULL;
        }

        free(temp);
        linkedListTraversal(head);
    }
}
int main(){
    struct node *head = NULL;
    struct node *Node_1 =(struct node*)malloc(sizeof(struct node));
    struct node *Node_2 =(struct node*)malloc(sizeof(struct node));
    struct node *Node_3 =(struct node*)malloc(sizeof(struct node));

    head = Node_1;

    Node_1 -> data = 2;
    Node_1 -> next = Node_2;

    Node_2 -> data = 4;
    Node_2 -> next = Node_3;

    Node_3 -> data = 6;
    Node_3 -> next = NULL;

    // linkedListTraversal(head);
    deleteEnd(head);
    return 0;
}
// save streak