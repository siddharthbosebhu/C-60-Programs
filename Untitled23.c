#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    // Input: A positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check for negative number
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using a loop
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is %lld\n", n, factorial);
    }

    return 0;
}
