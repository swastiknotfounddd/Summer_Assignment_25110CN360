#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    if (scanf("%d", &rows) != 1 || rows < 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 1; i <= rows; i++) {
        // spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // ascending numbers
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }
        // descending numbers
        for (int m = i - 1; m >= 1; m--) {
            printf("%d", m);
        }
        printf("\n");
    }

    return 0;
}
