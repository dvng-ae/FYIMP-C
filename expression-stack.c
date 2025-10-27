#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Define structure for stack node
struct Node {
    int data;
    struct Node *next;
};

// Function to push data onto stack
void push(struct Node **top, int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *top;
    *top = newNode;
}

// Function to pop data from stack
int pop(struct Node **top) {
    if (*top == NULL) {
        printf("Stack underflow!\n");
        exit(1);
    }
    struct Node *temp = *top;
    int val = temp->data;
    *top = temp->next;
    free(temp);
    return val;
}

// Function to evaluate postfix expression
int evaluatePostfix(char *exp) {
    struct Node *stack = NULL;
    int i;

    for (i = 0; exp[i] != '\0'; i++) {
        if (isdigit(exp[i])) {
            push(&stack, exp[i] - '0');  // convert char to int
        } else {
            int b = pop(&stack);
            int a = pop(&stack);
            switch (exp[i]) {
                case '+': push(&stack, a + b); break;
                case '-': push(&stack, a - b); break;
                case '*': push(&stack, a * b); break;
                case '/': push(&stack, a / b); break;
            }
        }
    }

    return pop(&stack);
}

// Main function
int main() {
    char exp[100];
    printf("Enter a postfix expression: ");
    scanf("%s", exp);

    printf("Result = %d\n", evaluatePostfix(exp));
    return 0;
}
