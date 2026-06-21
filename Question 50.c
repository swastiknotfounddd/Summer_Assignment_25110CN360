#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];
    long long sum = 0;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
        sum += arr[i];
    }

    double average = (double)sum / n;

    printf("Sum = %lld\n", sum);
    printf("Average = %.2lf\n", average);

    return 0;
}
