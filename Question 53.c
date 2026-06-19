#include <stdio.h>

int main() {
    int n, key, found = -1;

    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("Enter the element to search: ");
    if (scanf("%d", &key) != 1) {
        printf("Invalid search key.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        printf("Element %d found at index %d.\n", key, found);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
