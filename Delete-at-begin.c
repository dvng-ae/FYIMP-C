#include<stdio.h>
#include <stdlib.h> 

struct node
{
    int data;
    struct node *link;
};

struct node  *start = NULL, *temp;

void insertion_at_end()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter the data: ");
    scanf("%d",&newnode->data);

    newnode->link = NULL;

    if(start == NULL)
    {
        start = newnode;
    }
    else
    {
        temp = start;
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
            temp->link = newnode;
    }
}

void display()
{
     if (start == NULL)
    {
        printf("The list is empty.\n");
        return;
    }
    temp = start;
    printf("linked list :");

    while (temp!=NULL)
    {
        printf("%d-> ",temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

void delete_at_begin()
{
    struct node *temp=start;
    if (start == NULL)
    {
        printf("list empty");
    }
    start = start->link;
    printf("Deleted node : %d \n",temp->data);
    free(temp);
}
int main()
{
    insertion_at_end();   
    insertion_at_end();   
    insertion_at_end();  
    
    // Display
    display();
    delete_at_begin();
    printf("after deleting\n");
    display();
    return 0;
}