#include <stdio.h>
#include <stdlib.h>

struct Node {
    char data;
    struct Node *link;
};

struct Node *start = NULL;

struct Node* createNode(char value) {
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->link = NULL;
    return newnode;
}

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

// Function to insert AFTER a given value
void insert_after_value(char key, char value) {
    struct Node *temp = start;
    while (temp != NULL && temp->data != key)
        temp = temp->link;

    if (temp == NULL) {
        printf("Value %c not found in list!\n", key);
        return;
    }

    struct Node *newnode = createNode(value);
    newnode->link = temp->link;
    temp->link = newnode;
}

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

    char key, val;
    printf("\nEnter the value after which to insert: ");
    scanf(" %c", &key);
    printf("Enter new data to insert: ");
    scanf(" %c", &val);

    insert_after_value(key, val);

    printf("\nList after insertion:\n");
    display();

    return 0;
}
