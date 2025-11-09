#include <stdio.h>
#include <stdlib.h>

struct Node {
    char data;
    struct Node *link;
};

struct Node *start = NULL;

// Function to create a new node
struct Node* createNode(char value) {
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->link = NULL;
    return newnode;
}

// Function to insert at end (to create the initial list)
void insert_at_end(char value) {
    struct Node *newnode = createNode(value);
    if (start == NULL) {
        start = newnode;
    } else {
        struct Node *temp = start;
        while (temp->link != NULL)
            temp = temp->link;
        temp->link = newnode;
    }
}

// Function to delete AFTER a given value
void delete_after_value(char key) {
    struct Node *temp = start;

    // Find the node containing the key
    while (temp != NULL && temp->data != key)
        temp = temp->link;

    // If key not found or no node after it
    if (temp == NULL || temp->link == NULL) {
        printf("No node found after value %c (or value not in list)\n", key);
        return;
    }

    // Node to be deleted is temp->link
    struct Node *todelete = temp->link;
    temp->link = todelete->link;
    printf("Deleted node: %c (after %c)\n", todelete->data, key);
    free(todelete);
}

// Function to display the list
void display() {
    struct Node *temp = start;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%c -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

int main() {
    insert_at_end('A');
    insert_at_end('B');
    insert_at_end('C');
    insert_at_end('D');

    printf("Original List:\n");
    display();

    char key;
    printf("\nEnter the value after which to delete: ");
    scanf(" %c", &key);

    delete_after_value(key);

    printf("\nList after deletion:\n");
    display();

    return 0;
}
