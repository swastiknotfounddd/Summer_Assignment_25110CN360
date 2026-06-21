#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the range (start and end): ");
    if (scanf("%d %d", &start, &end) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Armstrong numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        int temp = i;
        int n = 0;
        
        // Find number of digits
        while (temp != 0) {
            temp /= 10;
            n++;
        }

        temp = i;
        long long sum = 0;
        while (temp != 0) {
            int remainder = temp % 10;
            long long power = 1;
            for (int k = 0; k < n; k++) {
                power *= remainder;
            }
            sum += power;
            temp /= 10;
        }

        if (sum == i && i >= 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
