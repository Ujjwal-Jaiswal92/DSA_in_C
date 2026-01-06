#include<stdio.h>
#include"lab6stack.h"

int main(){
    Stack s;

    initStack(&s);

    push(&s,7);
    push(&s,8);
    push(&s,4);

    display(&s);

    printf("Popped element:%d\n",pop(&s));
    printf("Top element:%d\n",peek(&s));

    display(&s);

    return 0;

}