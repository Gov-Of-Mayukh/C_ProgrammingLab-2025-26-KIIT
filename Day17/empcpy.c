#include <stdio.h>
#include <string.h>

// Define structure
struct Employee {
    char name[50];
    int age;
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;

    // Input values for first structure
    printf("Enter employee name: ");
    fgets(e1.name, sizeof(e1.name), stdin);
    e1.name[strcspn(e1.name, "\n")] = '\0'; // remove newline if present

    printf("Enter employee age: ");
    scanf("%d", &e1.age);

    printf("Enter employee ID: ");
    scanf("%d", &e1.id);

    printf("Enter employee salary: ");
    scanf("%f", &e1.salary);

    // Copy structure e1 to e2
    e2 = e1;

    // Print both structures
    printf("\n--- Employee 1 Details ---\n");
    printf("Name: %s\n", e1.name);
    printf("Age: %d\n", e1.age);
    printf("ID: %d\n", e1.id);
    printf("Salary: %.2f\n", e1.salary);

    printf("\n--- Employee 2 (Copied) Details ---\n");
    printf("Name: %s\n", e2.name);
    printf("Age: %d\n", e2.age);
    printf("ID: %d\n", e2.id);
    printf("Salary: %.2f\n", e2.salary);

    return 0;
}
