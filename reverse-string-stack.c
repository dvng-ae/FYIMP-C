#include<stdio.h>
#include<string.h>
#define size 100

char stack[size];
int top = -1;

void push(char ch){
    if(top < size -1)
    {
        stack[++top] = ch;
    }
}

char pop(){
    if(top>=0){
        return stack[top--];
    }
}

int main()
{
    char str[size];
    int i;
    
    printf("Enter the string : ");
    fgets(str, size ,stdin);
    
    for(i = 0 ; str[i]!= '\0'; i++){
        push(str[i]);
    }
    
    for(i = 0 ; str[i]!= '\0'; i++){
        str[i] = pop();
    }
    
    printf("Reversed string: %s\n", str);

    return 0;
}