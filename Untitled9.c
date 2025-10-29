#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter the first number (a): ");
    scanf("%d", &a);

    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Display values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap the values without a third variable using arithmetic
    a = a + b;  // Step 1: a becomes the sum of a and b
    b = a - b;  // Step 2: b becomes the original value of a
    a = a - b;  // Step 3: a becomes the original value of b

    // Display values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
