#include <stdio.h>

void display() {
    auto int x = 10;   // 'auto' variable (default)
    printf("Value of x inside function: %d\n", x);
}

int main() {
    display();
    // x is not accessible here because it is local to display()
    return 0;
}
