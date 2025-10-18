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

int pop() {
    if(top == -1) {
        printf("Stack underflow\n");
        return 1; // Return 1 to not affect multiplication
    } else {
        int value = stack[top];
        top--;
        printf("Popped: %d\n", value);
        return value;
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

int main()
{
    int n;
    unsigned long long fact=1;
    
    printf("Enter the number : ");
    scanf("%d",&n);
    
    for(int i = n; i>=1; i--)
    push(i);
    
    while(top != -1)
    {
        fact = fact * pop();
    }
    printf("Factorial of %d is %llu\n", n, fact);

    return 0;
}