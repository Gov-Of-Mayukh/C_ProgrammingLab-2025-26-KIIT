#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
    float height;
};

int main() {
    struct Employee e[4];   // array of 4 employees
    int i, tallest_index = 0;

    // Input employee details
    for (i = 0; i < 4; i++) {
        printf("\nEnter details of Employee %d:\n", i + 1);

        printf("Name: ");
        fflush(stdin); // clear buffer for fgets
        fgets(e[i].name, sizeof(e[i].name), stdin);
        e[i].name[strcspn(e[i].name, "\n")] = '\0'; // remove newline

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Salary: ");
        scanf("%f", &e[i].salary);

        printf("Height (in cm): ");
        scanf("%f", &e[i].height);

        getchar(); // ✅ clears newline left by scanf
    }

    // Find the tallest employee
    for (i = 1; i < 4; i++) {
        if (e[i].height > e[tallest_index].height) {
            tallest_index = i;
        }
    }

    // Display all employee details
    printf("\n--- Employee Details ---\n");
    for (i = 0; i < 4; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name   : %s\n", e[i].name);
        printf("ID     : %d\n", e[i].id);
        printf("Salary : %.2f\n", e[i].salary);
        printf("Height : %.2f cm\n", e[i].height);
    }

    // Print tallest employee details
    printf("\n--- Tallest Employee ---\n");
    printf("Name   : %s\n", e[tallest_index].name);
    printf("ID     : %d\n", e[tallest_index].id);
    printf("Salary : %.2f\n", e[tallest_index].salary);
    printf("Height : %.2f cm\n", e[tallest_index].height);

    return 0;
}
