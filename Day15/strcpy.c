#include <stdio.h>
#include <string.h>   // for strcpy()

int main() {
    char str1[100], str2[100], str3[100];
    int i;

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);  // safer input than gets()

    // --- Without using library function ---
    for(i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    str2[i] = '\0';  // Add null terminator

    // --- Using library function strcpy() ---
    strcpy(str3, str1);

    // --- Output ---
    printf("\nOriginal String       : %s", str1);
    printf("Copied (manual)       : %s", str2);
    printf("Copied (using strcpy) : %s", str3);

    return 0;
}
