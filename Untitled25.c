#include <stdio.h>

int main() {
    int n, sum = 0, digit;

    // Input: The number for which the sum of digits is required
    printf("Enter a number: ");
    scanf("%d", &n);

    // Handle negative numbers
    n = (n < 0) ? -n : n;  // Convert negative numbers to positive

    // Find the sum of digits
    while (n > 0) {
        digit = n % 10;  // Get the last digit
        sum += digit;    // Add it to the sum
        n = n / 10;      // Remove the last digit
    }

    // Output the result
    printf("The sum of digits is: %d\n", sum);

    return 0;
}
