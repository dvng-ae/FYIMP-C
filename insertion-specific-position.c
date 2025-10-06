#include <stdio.h>

int main() {
    int arr[100], n, i, pos, val;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insert at the beginning
    printf("\nEnter element to insert at the beginning: ");
    scanf("%d", &val);

    for (i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = val;
    n++;

    printf("Array after inserting at beginning:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insert at the end
    printf("\nEnter element to insert at the end: ");
    scanf("%d", &val);

    arr[n] = val;
    n++;

    printf("Array after inserting at end:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insert at a specific position
    printf("\nEnter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter element to insert at position %d: ", pos);
    scanf("%d", &val);

    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val;
    n++;

    printf("Array after inserting at position %d:\n", pos);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
