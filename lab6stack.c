#include <stdio.h>
#include "lab6stack.h"

void initStack(Stack *s){
    s->top=-1;
}

int isEmpty(Stack *s){
    return s->top==-1;
}

int isFull(Stack *s){
    return s->top==MAX-1;
}

void push(Stack *s,int value){
    if(isFull(s)){
        printf("Stack overflow.\n");
        return;
    }
    s->data[++s->top]=value;
}

int pop(Stack *s){
    if(isEmpty(s)){
        printf("Stack underflow.\n");
        return -1;
    }
    return s->data[s->top--];
}

int peek(Stack *s){
    if(isEmpty(s)){
        printf("Stack underflow.\n");
        return -1;
    }
    return s->data[s->top];
}

int display(Stack *s){
    if(isEmpty(s)){
        printf("Stack underflow.\n");
        return -1;
    }
    for(int i=s->top;i>=0;i--){
        printf("%d ",s->data[i]);
    }
    printf("\n");
}