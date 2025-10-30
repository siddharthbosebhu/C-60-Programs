#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, digits = 0, constants = 0, spaces = 0;
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]s", str); // Read string with spaces

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == ' ')
            spaces++;
        else if (isdigit(ch))
            digits++;
        else if (ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u'||
                 ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U')
            vowels++;
        else
            constants++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Digits = %d\n", digits);
    printf("Constants = %d\n", constants);
    printf("Spaces = %d\n", spaces);

    return 0;
}
