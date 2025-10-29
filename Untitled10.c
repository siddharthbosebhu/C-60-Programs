#include <stdio.h>

int main() {
    float marks[5], total = 0.0, average, percentage;
    int i;

    // Input marks for five subjects
    printf("Enter marks for 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];  // Add marks to total
    }

    // Calculate average and percentage
    average = total / 5;
    percentage = (total / 500) * 100;  // Total maximum marks are 500 (5 subjects * 100 marks each)

    // Display results
    printf("\nTotal Marks = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
