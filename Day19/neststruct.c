#include <stdio.h>

// Outer structure
struct saptami{
    int roll;
    char name[30];

    // Inner structure
    struct monjulika{
        char city[30];
        int pincode;
    } addr;  // variable of inner structure
};

int main() {
    struct saptami s1;

    // Input student details
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);

    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("Enter city: ");
    scanf("%s", s1.addr.city);

    printf("Enter pincode: ");
    scanf("%d", &s1.addr.pincode);

    // Display details
    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("City: %s\n", s1.addr.city);
    printf("Pincode: %d\n", s1.addr.pincode);

    return 0;
}
