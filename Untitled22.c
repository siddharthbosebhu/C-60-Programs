#include <stdio.h>

int main() {
    int num;

    // Input: The number for which the multiplication table is needed
    printf("Enter a number: ");
    scanf("%d", &num);

    // Printing the multiplication table
    printf("Multiplication table of %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
