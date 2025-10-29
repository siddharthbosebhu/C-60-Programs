#include <stdio.h>
#include <ctype.h>  // For the tolower() function

int main() {
    char ch;

    // Input character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert character to lowercase to handle both uppercase and lowercase vowels
    ch = tolower(ch);

    // Check if the character is a vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a Vowel.\n", ch);
    } else if ((ch >= 'a' && ch <= 'z')) {
        printf("%c is a Consonant.\n", ch);
    } else {
        printf("%c is not a valid alphabetic character.\n", ch);
    }

    return 0;
}
