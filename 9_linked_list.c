#include<stdio.h>
#include<stdlib.h>

int main(){

    struct node{
    int data;
    struct node *next;
    };
    struct node *head, *newNode, *temp;
    head = NULL;
    int choice;
    printf("Enter Your choice b/w '1' and '0': ");
    scanf("%d",&choice);
    while(choice == 1){
    newNode = (struct node*) malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d",&newNode -> data); 
    newNode -> next = NULL;

    if(head == NULL){
    head = temp = newNode;
    }
    else{
        temp -> next = newNode;
        temp = newNode;
        }
    }

    temp = head;
    while(temp !=NULL){
        printf("%d",temp -> data);
        temp = temp -> next;
    }
    return 0;
}