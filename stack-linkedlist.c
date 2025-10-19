#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* link;
};

struct Node* top = NULL;

void push (int value){
    
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    if(!newnode){
        printf("stack overflow");
        return;
    }
    newnode->data = value;
    newnode->link = top;
    top = newnode;
    
    printf("Pushed %d to stack\n", value);
}

void pop(){
    if(top == NULL){
        printf("stack underflow");
        return;
    }
    struct Node* temp =top;
    int popped = temp->data;
    top = top->link;
    
    printf("Popped: %d\n", popped);
}

void peek(){
    if(top == NULL)
    {
        printf("stack is empty");
    }
    else
    {
        printf("Top : %d \n",top->data);
    }
}

void display(){
    struct Node* temp = top;
    while(temp != NULL){
        printf("%d  ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main(){
    
    push(10);
    push(20);
    push(30);
    display();     // Should print: 30 20 10

    peek();        // Should print: 30

    pop();
    display();     // Should print: 20 10

    pop();
    pop();
    pop();         // Should show underflow

    return 0;
}





