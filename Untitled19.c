#include <stdio.h>
#include <ctype.h>  // For isupper(), islower(), isdigit(), etc.

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check the character type using standard library functions
    if (isupper(ch)) {
        printf("%c is an Uppercase letter.\n", ch);
    } else if (islower(ch)) {
        printf("%c is a Lowercase letter.\n", ch);
    } else if (isdigit(ch)) {
        printf("%c is a Digit.\n", ch);
    } else if (isspace(ch)) {
        printf("%c is a Space.\n", ch);
    } else {
        printf("%c is a Symbol or Special Character.\n", ch);
    }

    return 0;
}
