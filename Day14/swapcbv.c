#include <stdio.h>

void swap(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Inside function after swap: a = %d, b = %d\n", a, b);
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(x, y);  // Call by value
    printf("After function call: x = %d, y = %d\n", x, y);

    return 0;
}
