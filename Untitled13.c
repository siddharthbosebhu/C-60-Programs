#include <stdio.h>

int main() {
    int number;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("%d is a Positive number.\n", number);
    } else if (number < 0) {
        printf("%d is a Negative number.\n", number);
    } else {
        printf("%d is Zero.\n", number);
    }

    return 0;
}
