#include <stdio.h>
#include <math.h>  // For sqrt() function

int main() {
    float a, b, c, discriminant, root1, root2;

    // Input coefficients a, b, and c
    printf("Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check if the discriminant is positive, zero, or negative
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        // One real root (repeated)
        root1 = -b / (2 * a);
        printf("The root is real and repeated.\n");
        printf("Root = %.2f\n", root1);
    }
    else {
        // Complex roots
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}
