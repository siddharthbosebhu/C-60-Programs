#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // Find the end of first string
    for (i = 0; str1[i] != '\0'; i++);

    // Append second string to first string
    for (j = 0; str2[j] != '\0'; j++, i++)
        str1[i] = str2[j];

    str1[i] = '\0'; // Null-terminate the concatenated string

    printf("Concatenated string: %s\n", str1);

    return 0;
}
