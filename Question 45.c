#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>

// Function to check palindrome. Returns 1 if palindrome, 0 otherwise.
int is_palindrome(int n) {
    int original = n;
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return (original == reversed);
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Invalid input. Must be a non-negative integer.\n");
        return 1;
    }

    if (is_palindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
