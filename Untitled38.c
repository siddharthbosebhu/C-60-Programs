#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Addition = %d\n", add(x, y));
    printf("Subtraction = %d\n", subtract(x, y));
    printf("Multiplication = %d\n", multiply(x, y));
    if (y != 0)
        printf("Division = %.2f\n", divide(x, y));
    else
        printf("Division by zero is not allowed.\n");

    return 0;
}
