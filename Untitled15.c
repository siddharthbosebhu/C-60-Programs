#include <stdio.h>

int main() {
    int year;

    // Input the year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check for leap year
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is not a Leap Year.\n", year);
    }

    return 0;
}
