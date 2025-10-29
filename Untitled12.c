#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Compare the numbers to find the greatest
    if (a >= b && a >= c) {
        printf("%d is the greatest among the three numbers.\n", a);
    } else if (b >= a && b >= c) {
        printf("%d is the greatest among the three numbers.\n", b);
    } else {
        printf("%d is the greatest among the three numbers.\n", c);
    }

    return 0;
}
