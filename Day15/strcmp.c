#include <stdio.h>
#include <string.h>   // for strcmp()

int main() {
    char str1[100], str2[100];
    int result;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character added by fgets
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Compare strings using strcmp()
    result = strcmp(str1, str2);

    if(result == 0)
        printf("\nBoth strings are equal.\n");
    else if(result > 0)
        printf("\nFirst string is greater than second.\n");
    else
        printf("\nFirst string is smaller than second.\n");

    return 0;
}
