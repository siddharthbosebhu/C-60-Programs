#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area, circumference;

    // Get radius from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display the results
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}
