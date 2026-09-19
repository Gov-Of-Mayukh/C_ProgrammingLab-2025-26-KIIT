#include <stdio.h>

int main() {
    FILE *fp;               // file pointer
    char text[100];

    // Open file in write mode
    fp = fopen("example.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to write into file: ");
    fgets(text, sizeof(text), stdin);   // read input from user

    // Write text to file
    fputs(text, fp);

    printf("Text written to file successfully.\n");

    // Close the file
    fclose(fp);

    return 0;
}
