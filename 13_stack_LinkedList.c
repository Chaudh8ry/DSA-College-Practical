#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;

void push(int value){
    struct node *newNode = malloc(sizeof(struct node));
    newNode -> data = value;
    newNode -> next = head;

    head = newNode;
}

void pop(){
    if(head == NULL){
        printf("UNderFlow");
    }
    else{
        struct node *temp = head;

        printf("Deleted Element is %d \n", head -> data);

        head = head -> next;

        free(temp);
    }
}

void display(){
    struct node *temp = head;
    while(temp != NULL){
        printf("Element is : %d \n",temp -> data);
        temp = temp -> next;
    }
}
int main(){
    int num;
    int operation;
    do{
        printf("Enter any Opertaion to perform: \n");
        printf("1. PUSH \n2. POP \n3.DISPLAY \n");
        scanf("%d",&operation);

        switch(operation){
            case 1:
                printf("Enter Value to Push in STACK: ");
                scanf("%d",&num);
                push(num);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Bye bYe EXIT!!!");
                break;
        }
    }while(operation != 4);
    return 0;
}