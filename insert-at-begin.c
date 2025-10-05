#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};  
struct node *start = NULL;

void insert_at_begin(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    IF(new_node == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    new_node->data = data;
    new_node->link = start;
    start = new_node;
}
void display()
{
    struct node *temp;
    temp= start;
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp = tem ->link;
    }
    printf("NULL\n");
}
int main(
    {
    insert_at_begin(10);
    insert_at_begin(20);
    insert_at_begin(30);
    display();
    return 0;





    }
)
