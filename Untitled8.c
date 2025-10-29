#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter the first number (a): ");
    scanf("%d", &a);

    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Display the values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap the values using a third variable 'temp'
    temp = a;
    a = b;
    b = temp;

    // Display the values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
