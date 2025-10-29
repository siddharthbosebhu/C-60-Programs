#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    // Input two numbers and an operator
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Notice the space before %c to catch any leading whitespace

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Switch-case for the operations
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;

        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid operator! Please use one of the following: +, -, *, /.\n");
            break;
    }

    return 0;
}
