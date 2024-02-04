#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// --------------------------------------------------DISPLAY---------------------------------------------------------------
void linkedListTraversal(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("Element : %d \n", temp->data);
        temp = temp->next;
    }
}

//--------------------------------------------------Count Length--------------------------------------------------------
int lengthLL(struct node *head)
{
    struct node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void deleteAtParticular(struct node *head)
{

    if (head == NULL)
    {
        printf("No element to Delete");
        return;
    }
    int pos;
    printf("Enter Position of Node for Deletion: ");
    scanf("%d", &pos); // lets assum '3'
    if (pos < 1 || pos > lengthLL(head))
    {
        printf("Invalid Position");
        return;
    }

    if (pos == 1) // removing 1st Node
    {
        struct node *temp1 = head;
        head = temp1->next;
        free(temp1);
    }
    else
    {
        struct node *temp = head, *nextNode;
        int i = 1;
        while (i < pos - 1)
        { // due to this condition temp will point to Node 2
            temp = temp->next;
            i++;
        }
        nextNode = temp->next;       // nextNode is at Node 3 (Node that has to be deleted)
        temp->next = nextNode->next; // this will store value of Node 3's 'next'(address of Node 4) in Node 2's 'next' which will cut Node 3 form list
        free(nextNode);
    }
    linkedListTraversal(head);
}

int main()
{
    struct node *head = NULL;
    struct node *Node_1 = (struct node *)malloc(sizeof(struct node));
    struct node *Node_2 = (struct node *)malloc(sizeof(struct node));
    struct node *Node_3 = (struct node *)malloc(sizeof(struct node));
    struct node *Node_4 = (struct node *)malloc(sizeof(struct node));

    head = Node_1;

    Node_1->data = 2;
    Node_1->next = Node_2;

    Node_2->data = 4;
    Node_2->next = Node_3;

    Node_3->data = 5;
    Node_3->next = Node_4;

    Node_4->data = 8;
    Node_4->next = NULL;
    deleteAtParticular(head);
    return 0;
}