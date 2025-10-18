#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int data;
    struct node *link;
};

struct node *start = NULL;

// Function to insert at end
void insertion_at_end(int value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->link = NULL;

    if (start == NULL) {
        start = newnode;
    } else {
        struct node *temp = start;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = newnode;
    }
}

// Function to reverse the linked list
void reverse_list() {
    struct node *prev = NULL, *curr = start, *next = NULL;

    while (curr != NULL) {
        next = curr->link;
        curr->link = prev;
        prev = curr;
        curr = next;
    }
    start = prev;
}

// Function to display the list
void display() {
    if (start == NULL) {
        printf("The list is empty.\n");
        return;
    }
    struct node *temp = start;
    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

int main() {
    int n, value;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

        printf("Enter data for node ");
    for (int i = 1; i <= n; i++) {
        
        scanf("%d", &value);
        insertion_at_end(value);
    }

    printf("\nOriginal linked list:\n");
    display();

    reverse_list();

    printf("\nReversed linked list:\n");
    display();

    return 0;
}
