#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0;
    float result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    while (original != 0) {
        original /= 10;
        ++n;
    }

    original = num;

    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    if ((int)result == num)
        printf("The number is an Armstrong number.\n");
    else
        printf("The number is not an Armstrong number.\n");

    return 0;
}
