#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student student;

    // Taking input for student details
    printf("Enter student details:\n");

    printf("Name: ");
    fgets(student.name, sizeof(student.name), stdin);  // To read strings with spaces

    printf("Roll Number: ");
    scanf("%d", &student.rollNumber);

    printf("Marks: ");
    scanf("%f", &student.marks);

    // Displaying student details
    printf("\nStudent Details:\n");
    printf("Name: %s", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
