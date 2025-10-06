#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element %d : ",i+1);
        scanf("%d", &arr[i]);
    }

   
    printf("Array elements are:\n");
    for (i = 0; i < n; i++) 
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
