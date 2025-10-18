#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    char data;
    struct Node *link;
};

struct Node *start = NULL;

// Create a new node
struct Node* createNode(char value) {
    struct Node *newnode = (struct Node*) malloc(sizeof(struct Node));
    if (newnode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newnode->data = value;
    newnode->link = NULL;
    return newnode;
}

// Insert at beginning
void insert_at_begin(char value) {
    struct Node *newnode = createNode(value);
    newnode->link = start;
    start = newnode;
}

// Insert at end
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

// Insert at specific position
void insert_at_pos(int pos, char value) {
    struct Node *newnode = createNode(value);

    if (pos == 1) {
        newnode->link = start;
        start = newnode;
        return;
    }

    struct Node *temp = start;
    int i;
    for (i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->link;
    }

    if (temp == NULL) {
        printf("Invalid position!\n");
        free(newnode);
        return;
    }

    newnode->link = temp->link;
    temp->link = newnode;
}

// Insert after specific element
void insert_after_element(char target, char value) {
    struct Node *temp = start;
    while (temp != NULL) {
        if (temp->data == target) {
            struct Node *newnode = createNode(value);
            newnode->link = temp->link;
            temp->link = newnode;
            return;
        }
        temp = temp->link;
    }

    printf("Element '%c' not found in the list.\n", target);
}

// Display the list
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

// Main function
int main() {
    char val, target, new_val;
    int pos;

    // Insertion at beginning
    printf("--- Insertion at Begin ---\n");
    printf("Enter the data: ");
    scanf(" %c", &val);
    insert_at_begin(val);
    display();

    // Insertion at end
    printf("\n--- Insertion at End ---\n");
    printf("Enter the data: ");
    scanf(" %c", &val);
    insert_at_end(val);
    display();

    //---

    // Insertion at specific position
    printf("\n--- Insertion at Specific Position ---\n");
    printf("Enter the data: ");
    scanf(" %c", &val);
    printf("Enter the position to insert at: ");
    scanf("%d", &pos);

    insert_at_pos(pos, val);
    display();

    // Insertion after specific element
    printf("\n--- Insertion after Specific Element ---\n");
    printf("Enter the target element: ");
    scanf(" %c", &target);
    printf("Enter the character to insert after '%c': ", target);
    scanf(" %c", &new_val);

    insert_after_element(target, new_val);
    display();

    return 0;
}