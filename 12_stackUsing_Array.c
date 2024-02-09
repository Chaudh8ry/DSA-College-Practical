#include <stdio.h>

int top = -1; // Declare TOP as Global Variable
void push(int size, int *stack);
void pop(int size, int *stack);
void peek(int size, int *stack);
void display(int size, int *stack);

int main()
{
    int n;
    printf("Enter Size of Stack: ");
    scanf("%d", &n);

    int stack[n];
    // int top = -1;

    printf("\nEnter a operation from below for the STACK: \n");

    int operation;
    
    do
    {
        printf("\n1.Push Operation \n 2.Pop Operation \n 3.Peek Operation \n 4.Display Operation \n 5.END \n\n");
        scanf("%d", &operation);
        switch (operation)
        {
        case 1:
            push(n, stack);
            break;

        case 2:
            pop(n, stack);
            break;

        case 3:
            peek(n, stack);
            break;

        case 4:
            display(n, stack);
            break;

        case 5:
            printf("\nExit Point\n");
            break;

        default:
            printf("\nEnter a Valid Operation!\n");
        }
    } while (operation != 5);

    return 0;
}
//--------------------------------------------PUSH OPERATION-----------------------------------------------------
void push(int size, int *stack)
{   
    if (top >= size - 1)
    {
        printf("\nStack Overflow!!!\n");
    }
    else
    {
        int key;
        printf("\n--> Enter Value to Push in Stack: ");
        scanf("%d", &key);

        top++;
        stack[top] = key;
    }
}
//--------------------------------------------POP OPERATION------------------------------------------------------
void pop(int size, int *stack)
{
    if (top <  0)
    {
        printf("\n Stack Underflow!!! \n");
    }
    else
    {
        printf("\n %d is the DELETED element from STACK \n", stack[top]);
        --top;
    }
}
//--------------------------------------------PEEK OPERATION------------------------------------------------------
void peek(int size, int *stack)
{
    if (top == -1)
    {
        printf("\n Stack is EMPTY!!! \n");
    }
    else
    {
        printf("\n %d is the Element at TOP of STACK \n", stack[top]);
    }
}
//--------------------------------------------DISPLAY OPERATION------------------------------------------------------
void display(int size, int *stack)
{
    if (top >= 0 && top < size)
    {
        printf("\n The Elements in Stack are : \n");
        for (int i = 0; i <= top; i++)
        {
            printf("Stack Element: %d \n", stack[i]);
        }
    }
    else if(top == -1){
        printf("Stack is Empty!! \n");
    }
}