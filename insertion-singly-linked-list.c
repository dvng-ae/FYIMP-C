#include <stdio.h>
#include <stdlib.h>

struct Node {
    char data;
    struct Node *link;
};

struct Node *start = NULL;   // global head pointer

void insert_at_beg() {
    struct Node *newnode;
    
    // allocate memory
    newnode = (struct Node *) malloc(sizeof(struct Node));
    
    printf("Enter the data: ");
    scanf(" %c", &newnode->data);  // reading character
    
    // link setup
    newnode->link = NULL;

    if (start == NULL) {
        start = newnode;   // first node in list
    } else {
        newnode->link = start;  // new node points to old first
        start = newnode;        // update start
    }
}

// function to display list
void display() {
    struct Node *temp = start;
    while (temp != NULL) {
        printf("%c -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

int main() {
    insert_at_beg();
    insert_at_beg();
    insert_at_beg();
    
    printf("Linked List: ");
    display();
    
    return 0;
}
