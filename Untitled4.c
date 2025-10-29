#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // User input for principal, rate, and time
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time in years: ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Display the result
    printf("The Simple Interest is: %.2f\n", simpleInterest);

    return 0;
}
