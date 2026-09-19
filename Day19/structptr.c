#include <stdio.h>

// Define structure
struct saptami{
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct saptami s1;          // structure variable
    struct saptami *ptr;        // pointer to structure

    ptr = &s1;                  // assign address of structure variable to pointer

    // Initialize values using pointer
    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);    // using -> to access members through pointer

    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Print values using pointer
    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
