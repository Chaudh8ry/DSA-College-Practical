#include<stdio.h>

int top = -1; //Declare TOP as Global Variable
void push(int size);
void pop(int size);
void peek(int size);
void display(int size);

int main(){
    int n;
    printf("Enter Size of Stack: ");
    scanf("%d",&n);

    int stack[n];
    // int top = -1;
    
    printf("Enter a operation from below for the STACK: ");
    int operation;
    printf("1.Push Operation \n 2.Pop Operation \n 3.Peek Operation \n 4.Display Operation \n 5.END");
    scanf("%d",&operation);

    do{
        switch(operation){
            case 1:
                push(n);
                break;
            
            case 2:
                pop(n);
                break;

            case 3:
                peek(n);
                break;

            case 4:
                display(n);
                break;

            case 5:
                printf("Exit Point");
                break;
            
            default:
                printf("Enter a Valid Operation!");
        }
    }
    while(operation != 5);

    return 0;
}
//--------------------------------------------PUSH OPERATION-----------------------------------------------------
    void push(int n){
        if(top > n-1){
            printf("Stack Overflow!!!");
        }

    }