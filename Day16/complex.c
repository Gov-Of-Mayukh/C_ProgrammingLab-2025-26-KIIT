#include <stdio.h>

// Define structure for a complex number
struct saptami{
    float real, imag;
};

int main() {
    struct saptami c1, c2, sum;

    // Input first complex number
    printf("Enter first complex number (real and imaginary): ");
    scanf("%f %f", &c1.real, &c1.imag);

    // Input second complex number
    printf("Enter second complex number (real and imaginary): ");
    scanf("%f %f", &c2.real, &c2.imag);

    // Add the complex numbers
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    // Display all values with proper signs
    printf("\nFirst Complex Number: %.2f %c %.2fi", c1.real, (c1.imag >= 0 ? '+' : '-'), (c1.imag >= 0 ? c1.imag : -c1.imag));
    printf("\nSecond Complex Number: %.2f %c %.2fi", c2.real, (c2.imag >= 0 ? '+' : '-'), (c2.imag >= 0 ? c2.imag : -c2.imag));
    printf("\nSum of Complex Numbers: %.2f %c %.2fi\n\n", sum.real, (sum.imag >= 0 ? '+' : '-'), (sum.imag >= 0 ? sum.imag : -sum.imag));

    return 0;
}
