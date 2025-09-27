#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *head = NULL, *tail = NULL;

void addNode(int data){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = data;
    newNode->link = NULL;

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->link = newNode;
        tail = newNode;
    }
}
void display(){
    struct node *temp = head;

    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    printf("Nodes of singly linked list:\n");

    while (temp != NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->link;
    }
    printf("NULL");
}
int main()
{
    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);

    display();
}
