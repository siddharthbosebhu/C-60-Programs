#include <stdio.h>

int main() {
    int n;

    // Input: The number of terms in the Fibonacci series
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Initialize first two terms
    long long a = 0, b = 1, next;

    // Handle cases where n <= 0
    if (n <= 0) {
        printf("Please enter a positive integer greater than zero.\n");
    } else {
        printf("Fibonacci series up to %d terms: \n", n);

        // Special case for n = 1
        if (n == 1) {
            printf("%d\n", a);
        } else {
            printf("%lld %lld ", a, b);  // Print the first two terms

            // Loop to print the rest of the terms
            for (int i = 3; i <= n; i++) {
                next = a + b;
                printf("%lld ", next);
                a = b;
                b = next;
            }
            printf("\n");
        }
    }

    return 0;
}
