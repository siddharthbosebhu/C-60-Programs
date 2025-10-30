#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    ptr = str; // Pointer points to the first character of the string

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("Length of the string = %d\n", length);
    return 0;
}
