#include <stdio.h>

int main() {
    int days, years, weeks, remainingDays;

    // Input total number of days
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Calculate years, weeks, and remaining days
    years = days / 365;                // Total years
    weeks = (days % 365) / 7;          // Total weeks from remaining days
    remainingDays = (days % 365) % 7;  // Remaining days after converting to years and weeks

    // Display the result
    printf("%d days is equivalent to:\n", days);
    printf("%d years, %d weeks, and %d days.\n", years, weeks, remainingDays);

    return 0;
}
