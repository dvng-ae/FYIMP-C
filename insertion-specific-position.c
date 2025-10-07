#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct Node {
    char data;
    struct Node *link;
};

struct Node *start = NULL;   // head pointer

// Function to create a new node
struct Node* createNode(char value) {
    struct Node *newnode = (struct Node*) malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->link = NULL;
    return newnode;
}

// Function to insert at end (to create initial list)
void insert_at_end(char value) {
    struct Node *newnode = createNode(value);
    if (start == NULL) {
        start = newnode;
    } else {
        struct Node *temp = start;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = newnode;
    }
}

// Function to insert a node at a given position
void insert_at_pos(int pos, char value) {
    struct Node *newnode = createNode(value);

    // Case 1: Insert at beginning (position = 1)
    if (pos == 1) {
        newnode->link = start;
        start = newnode;
        return;
    }

    // Traverse to (pos-1)th node
    struct Node *temp = start;
    int i;
    for (i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->link;
    }

    // If position is invalid
    if (temp == NULL) {
        printf("Invalid position!\n");
        free(newnode);
        return;
    }

    // Insert node
    newnode->link = temp->link;
    temp->link = newnode;
}

// Function to display the list
void display() {
    struct Node *temp = start;
    if (start == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%c -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

int main() {
    // Step 1: Create existing list
    insert_at_end('A');
    insert_at_end('B');
    insert_at_end('C');
    insert_at_end('D');

    printf("Original List:\n");
    display();

    // Step 2: Take input from user
    char val;
    int pos;
    printf("\nEnter the data to insert: ");
    scanf(" %c", &val);
    printf("Enter the position: ");
    scanf("%d", &pos);

    // Step 3: Insert at specific position
    insert_at_pos(pos, val);

    printf("\nList after insertion:\n");
    display();

    return 0;
}
