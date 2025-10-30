#include <stdio.h>

int main() {
    int var;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &var);

    ptr = &var; // Pointer points to the address of var

    printf("Value of variable = %d\n", *ptr);
    printf("Address of variable = %p\n", (void*)ptr);

    return 0;
}
