#include<stdio.h>
#define MAX 100

struct Queue{
    int queue[MAX];
    int front;
    int rear;
};

void initializeQueue(struct Queue *q){
    q->front=-1;
    q->rear=-1;
}

int isEmpty(struct Queue *q){
    return(q->front==-1);
}

int isFull(struct Queue *q){
    return(q->rear==MAX-1);
}

void enqueue(struct Queue *q,int data){
    if(isFull(q)){
        printf("The queue is full.\n");
        return;
    }
    if(isEmpty(q)){
        q->front=0;
    }
    q->rear++;
    q->queue[q->rear]=data;
    printf("Enqueued data is %d\n",data);
}

void  dequeue(struct Queue *q){
    if(isEmpty(q)){
        printf("Queue is empty.\n");
        return;
    }
    int data=q->queue[q->front];
    q->front++;
    if(q->front==q->rear){
        initializeQueue(q);
    }
    printf("The deleted elelment is %d .\n",data);
}

void display(struct Queue *q){
    if(isEmpty(q)){
        printf("Queue is empty.\n");
        return;
    }
    for(int i=q->front;i<=q->rear;i++){
        printf("%d\t",q->queue[i]);
    }
    printf("\n");
}

int main(){
    struct Queue q;
    initializeQueue(&q);
    enqueue(&q,4);
    enqueue(&q,5);
    enqueue(&q,7);
    enqueue(&q,1);
    printf("Elements in queue:");
    display(&q);
    dequeue(&q);
    printf("Elements in queue:");
    display(&q);
    return 0;
}