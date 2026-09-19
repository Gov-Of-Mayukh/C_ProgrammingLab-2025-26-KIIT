
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline added by fgets
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    printf("\nReversed string (manual): ");
    for(i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);   // use %c for single character
    }

    printf("\n");

    return 0;
}
