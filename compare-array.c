#include <stdio.h>

int main() {
    int n, i, equal = 1;

    printf("Enter the size of arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Compare arrays
    for (i = 0; i < n; i++) {
        if (arr1[i] == arr2[i]) {
            equal = 1;   // arrays are not equal
            break;
        }
    }

    if (equal == 1)
        printf("Arrays are equal.\n");
    else
        printf("Arrays are NOT equal.\n");

    return 0;
}
