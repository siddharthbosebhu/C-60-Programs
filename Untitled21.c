#include <stdio.h>

int main() {
    int n;

    // Input: Number of natural numbers to print
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if n is positive
    if (n <= 0) {
        printf("Please enter a positive integer greater than zero.\n");
    } else {
        // Print first n natural numbers using a loop
        printf("The first %d natural numbers are:\n", n);
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
