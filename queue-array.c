#include<stdio.h>
#define size 5

int queue[size];
int front = -1 ,rear = -1;

void enqueue(int value){
    if (rear == size -1)
    {
        printf("queue overflow");
    }
    else{
        front ==-1;
        front =0;
        rear++;
        queue[rear]= value;
        printf("%d enqueued , ",value);
    }
}
void dequeue(){
    if(front == -1 || front > rear){
        printf("queue underflow");
    }
    else{
        int value = queue[front];
        printf("%d dequeued",value);
        front++;
    }
}
void display(){
     if(front == -1 || front > rear){
        printf("empty queue");
    }
    else{
        printf("Queue : ");
            for(int i = front ; i <= rear ; i++)
            printf("%d  ",queue[i]);
    }
    printf("\n");
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
}

