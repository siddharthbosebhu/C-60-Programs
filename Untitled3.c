#include <stdio.h>

int main() {
    float num1, num2;
    float sum, diff, product, quotient;

    // Taking two numbers as input
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Performing arithmetic operations
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    
    // Checking for division by zero
    if (num2 != 0) {
        quotient = num1 / num2;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        quotient = 0; // Setting quotient to 0 in case of error
    }

    // Displaying results
    printf("\nResults:\n");
    printf("Addition: %.2f + %.2f = %.2f\n", num1, num2, sum);
    printf("Subtraction: %.2f - %.2f = %.2f\n", num1, num2, diff);
    printf("Multiplication: %.2f * %.2f = %.2f\n", num1, num2, product);
    
    if (num2 != 0) {
        printf("Division: %.2f / %.2f = %.2f\n", num1, num2, quotient);
    }

    return 0;
}
