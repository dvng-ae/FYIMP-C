#include<stdio.h>
int main()
{
    int n,i,search;

    printf("Enter the number of element : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the %d element in sorted order ",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to search : ");
    scanf("%d",&search);

    int start = 0, stop = n-1, found = 0, mid;

    while (start<=stop)
    {
        mid = (start+stop)/2;

        if(arr[mid]==search)
        {
            printf("Element %d found at position %d\n",search,mid+1);
            found = 1;
            break;
        }
        else if(arr[mid]<search)
        {
            start = mid+1;
        }
        else
        {
            stop = mid-1;
        }
    }
        if(!found)
            {
                printf("Element %d not found ",search);
            }
}