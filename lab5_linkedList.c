#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}node;

node* createNode(int data){
    node* newNode= (node*)malloc(sizeof(node));

    if(newNode==NULL)return NULL;

    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

int insertBeforeHead(node** head, int data){
    node* newNode = createNode(data);

    if(newNode==NULL)return -1;

    if(*head==NULL){
        *head=newNode;
        return 0;    
    }
    newNode->next=*head;
    *head=newNode;
    return 0;
}

int deleteHead(node** head){
    node* temp=*head;
    *head=(*head)->next;
    free(temp);
    return 0;
}

int isEmpty(node** stack)
{
    return *stack==NULL;
}

void push(node** stack,int data)
{
    if(insertBeforeHead(stack,data))
    {
        printf("Stack overflow!!");
    }
}

int pop(node** stack)
{
    if(isEmpty(stack)){
        printf("stack underflow!!\n");
        return 1;
    }

    int data =(*stack)->data;
    deleteHead(stack);
    return data;
}

int peek(node** stack)
{
    if(isEmpty(stack)){
        return (*stack)->data;
    }
    return -1;
}

void printStack(node** stack)
{
    node* temp= *stack;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    free(temp);
}

int main()
{
    node* stack=NULL;

    push(&stack,40);
    push(&stack,58);
    push(&stack,76);
    push(&stack,54);

    printf("stack:");
    printStack(&stack);

    pop(&stack);
    pop(&stack);

    printf("stack:");
    printStack(&stack);

    push(&stack,43);
    push(&stack,21);

    printf("stack:");
    printStack(&stack);    

    return 0;

}