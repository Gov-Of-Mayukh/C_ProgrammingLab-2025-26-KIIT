#include <stdio.h>

int main() {
    FILE *source, *target;   // file pointers
    char ch;

    // Open source file in read mode
    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Error: Cannot open source file!\n");
        return 1;
    }

    // Open target file in write mode
    target = fopen("target.txt", "w");
    if (target == NULL) {
        printf("Error: Cannot open target file!\n");
        fclose(source);
        return 1;
    }

    // Copy contents character by character
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }

    printf("File copied successfully.\n");

    // Close both files
    fclose(source);
    fclose(target);

    return 0;
}
