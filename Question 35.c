#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows (up to 26): ");
    if (scanf("%d", &rows) != 1 || rows < 1 || rows > 26) {
        printf("Invalid input. Must be between 1 and 26.\n");
        return 1;
    }

    for (int i = 1; i <= rows; ++i) {
        char ch = 'A' + i - 1;
        for (int j = 1; j <= i; ++j) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
