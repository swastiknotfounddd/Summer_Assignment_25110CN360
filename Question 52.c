#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];
    int evenCount = 0, oddCount = 0;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Even elements count = %d\n", evenCount);
    printf("Odd elements count = %d\n", oddCount);

    return 0;
}
