#include <stdio.h>
#include <string.h>

// Define structure
struct Student {
    char name[50];
    int rno;
    float height;
};

int main() {
    struct Student s, *ptr;

    // Assign pointer to structure
    ptr = &s;

    // Input values using pointer
    printf("Enter student name: ");
    fgets(ptr->name, sizeof(ptr->name), stdin);
    ptr->name[strcspn(ptr->name, "\n")] = '\0'; // remove newline

    printf("Enter roll number: ");
    scanf("%d", &ptr->rno);

    printf("Enter height (in cm): ");
    scanf("%f", &ptr->height);

    // Print values using pointer
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->rno);
    printf("Height: %.2f cm\n", ptr->height);

    return 0;
}
