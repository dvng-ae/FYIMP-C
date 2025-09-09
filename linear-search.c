#include<stdio.h>
int main()
{
    int n,i,search;

    printf("Enter the number of element :");
    scanf("%d",&n);

    int arr[i];

    printf("Enter the %d elements : ", n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",arr[i]);
    }

    printf("Enter the number to be searched : ");
    scanf(|"%d",search);

    if (arr[i]==search)
    {
        printf(("Element %d found at position %d\n",search,i+1);
    }
    else
    {
        printf("Element %d not found in the array.\n",search);
    }
    
    return 0;
}