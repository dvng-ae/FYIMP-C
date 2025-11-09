#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* front = NULL;
struct node* rear = NULL;

void enqueue(int value){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;

    if (rear == NULL){
        front = rear = newnode;
    }else{
            rear->next= newnode;
            rear = newnode;
    }
    printf("Enqueued : %d \n", value);
}

void dequeue(){
    if(front == NULL){
        printf("Queue under flow");
        return;
    }
    struct node* temp;
    temp = front;
    printf("Dequeued %d \n",front->data);
    front = front->next;
    free(temp);
}
void display() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }

    struct node* temp = front;
    printf("Queue : ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    dequeue();
    display();

    return 0;
}
