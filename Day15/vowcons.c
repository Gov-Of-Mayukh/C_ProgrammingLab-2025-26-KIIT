#include <stdio.h>
#include <ctype.h>   // for tolower()
#include <string.h>

int main() {
    char str[200];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline added by fgets
    //str[strcspn(str, "\n")] = '\0';
    if(str[strlen(str)-1]=='\n')
        str[strlen(str)-1] = '\0';

    // Traverse each character
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);   // convert to lowercase for easy comparison

        if (ch >= 'a' && ch <= 'z') {   // only check alphabets
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("\nTotal vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);

    return 0;
}

