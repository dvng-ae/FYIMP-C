#include<stdio.h>
#define size 5

int stack[size];
int top = -1;

void push(int value){

    if(size -1 == top)
    {
        printf("Stack overflow");
    }
    else{
        top++;
        stack[top]= value;
        printf("Pushed %d to stack\n",value);
    }
}

void pop(){

    if(top == -1)
    {
        printf("Stack underflow");
    }
    else{
        int value = stack[top];
        top--;
        printf("Poped : %d ",value);
        printf("\n");
    }    
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    }
    else{
        printf("stack : ");
            for (int i = top; i >= 0; i--)
            {
                printf("%d  ",stack[i]);
            }
            printf("\n");
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();    
    
    pop();          
    display();      
    pop();
    display();      
    return 0;
}