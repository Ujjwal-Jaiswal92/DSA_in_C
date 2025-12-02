#include<stdio.h>
#define MAX 5

int stack [MAX];
int top = -1;

int isEmpty();
int isFull();
void push(int value);
int pop();
int peek();
void display();

int main()
{
    int value, choice;

    while(1){
        printf("\nStack Menu\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Check If Full\n");
        printf("5. Check If Empty\n");
        printf("6. Display\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: 
                printf("Enter a value to be pushed: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                value = pop();
                if( value != 1){
                    printf("Top element is %d", value);
                }
                break;
            case 3:
                value = peek();
                if( value != 1){
                    printf("Peeked top element is %d", value);
                }
                break;
            case 4:
                isFull()? printf("Stack is Full\n"):printf("Stack is not full.\n");
                break;
            case 5:
                isEmpty()? printf("Stack is Empty\n"):printf("Stack is not Empty.\n");
                break;
            case 6:
                display();
                break;
            case 7:
                printf("Exiting Program...\n");
                return 0;
            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}
int isEmpty(){
    return (top == -1);
}
int isFull(){
    return(top == MAX-1);
}
void push(int value){
    if(isFull()){
        printf("Stack is overflow.\n");
        return;
    }
    else {
        // stack[top] = top + value;
        stack[++top] = value;
        printf("%d is pushed onto the stack.\n", value);
    }
}

int pop(){
    if(isEmpty()){
        printf("Stack is underflow\n");
        return -1;
    }
    else
    {
        return stack[top--];
    }
}

int peek(){
    if(isEmpty()){
        printf("Stack is underflow\n");
        return -1;
    }
    else
    {
        return stack[top];
    }
}
void display(){
    if(isEmpty())
    {
        printf("Stack is uderflow or empty.\n");
        return;
    }
    else
    {
        printf("Stack Elements are :\n");
        for(int i = top ; i >= 0; i--){
            printf("%d\t", stack[i]);
        }
        printf("\n");
    }
}


