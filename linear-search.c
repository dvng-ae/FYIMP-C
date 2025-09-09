#include<stdio.h>
int main()
{
    int n,i,search,found;

    printf("Enter the number of element :");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the %d elements : ", n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the number to be searched : ");
    scanf("%d",&search);

    for ( i = 0; i < n; i++){
    if (arr[i]==search)
        {
            printf("Element %d found at position %d\n",search,i+1);
            found=1;
            break;
        }
    }
    if (!found)
    {
        printf("Element %d not found in the array.\n",search);
    }
    
    return 0;
}