#include<stdio.h>
#define capacity 4

int cirQueue[capacity];
int size=0;
int front=-1;
int rear=-1;


int isEmpty(){
    return(size==0);
}

int isFull(){
    return(size==capacity);
}

void enqueue(int data){
    if(isFull()){
        printf("The queue is full.\n");
        return;
    }
    if(isEmpty()){
        front=0;
    }
    rear=(rear+1)%capacity;
    cirQueue[rear]=data;
    printf("Enqueued data is %d\n",data);
    size++;
}

void  dequeue(){
    if(isEmpty()){
        printf("Queue is empty.\n");
        return;
    }
    int data=cirQueue[front];
    front=(front+1)%capacity;
    printf("The deleted elelment is %d .\n",data);
    size--;
}

void display(){
    if(isEmpty()){
        printf("Queue is empty.\n");
        return;
    }
    printf("The elements in queue:\n");
    int k=front;
    for(int i=0;i<size;i++){
        printf("%d\t",cirQueue[k]);
        k=(k+1)%capacity;
    }
    printf("\n");
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    dequeue();
    dequeue();
    display();
    enqueue(60);
    enqueue(70);
    display();
    return 0;
}