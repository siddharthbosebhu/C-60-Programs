#include <stdio.h>

double power(double base, int exp) {
    double result = 1;
    int i;
    for (i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    double base;
    int exponent;
    printf("Enter base and exponent: ");
    scanf("%lf %d", &base, &exponent);

    printf("%.2lf ^ %d = %.2lf\n", base, exponent, power(base, exponent));

    return 0;
}
