#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

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
    int lengthofll = lengthLL(head);
    printf("%d",lengthofll);
    return 0;
}