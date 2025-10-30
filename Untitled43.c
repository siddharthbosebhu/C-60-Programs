#include <stdio.h>

int sumOfNumbers(int n) {
    if (n == 0)
        return 0;
    return n + sumOfNumbers(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of first %d numbers = %d\n", n, sumOfNumbers(n));
    return 0;
}
