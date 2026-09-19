#include <stdio.h>

int x = 10;       // global variable

void display() {
    extern int x; // refers to the global variable 'x'
    printf("Value of x = %d\n", x);
}

int main() {
    display();
    return 0;
}
