#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline added by fgets
    str[strcspn(str, "\n")] = '\0';

    printf("\nFirst character of each word: ");

    // Print first character of the string (if not space)
    if (str[0] != ' ' && str[0] != '\0')
        printf("%c", str[0]);

    // Traverse the string
    for (i = 1; str[i] != '\0'; i++) {
        // If current character is not space
        // and previous character is space, print current one
        if (str[i] != ' ' && str[i - 1] == ' ')
            printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
