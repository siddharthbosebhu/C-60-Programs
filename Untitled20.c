#include <stdio.h>

int main() {
    float marks;

    // Input marks
    printf("Enter the marks (0 - 100): ");
    scanf("%f", &marks);

    // Check the marks and assign a grade
    if (marks >= 90 && marks <= 100) {
        printf("Grade: A\n");
    } else if (marks >= 80 && marks < 90) {
        printf("Grade: B\n");
    } else if (marks >= 70 && marks < 80) {
        printf("Grade: C\n");
    } else if (marks >= 60 && marks < 70) {
        printf("Grade: D\n");
    } else if (marks >= 0 && marks < 60) {
        printf("Grade: F\n");
    } else {
        printf("Invalid marks! Please enter a value between 0 and 100.\n");
    }

    return 0;
}
