#include <stdio.h>

int main() {
    int n;

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

    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("Duplicate elements in the array: ");
    int hasDuplicates = 0;
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) continue;
        
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        if (count > 1) {
            printf("%d ", arr[i]);
            hasDuplicates = 1;
        }
    }

    if (!hasDuplicates) {
        printf("None");
    }
    printf("\n");

    return 0;
}
