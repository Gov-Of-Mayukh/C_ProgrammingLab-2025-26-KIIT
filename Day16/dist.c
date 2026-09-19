#include <stdio.h>

struct saptami{
    int km;
    int m;
};

int main() {
    struct saptami d1, d2, sum;

    // Input first distance
    printf("Enter first distance (km and m): ");
    scanf("%d %d", &d1.km, &d1.m);

    // Input second distance
    printf("Enter second distance (km and m): ");
    scanf("%d %d", &d2.km, &d2.m);

    // Add the distances
    sum.km = d1.km + d2.km;
    sum.m  = d1.m + d2.m;

    // Adjust if meters >= 1000
    if (sum.m >= 1000) {
        sum.km += sum.m / 1000;  // convert meters to km
        sum.m = sum.m % 1000;    // remaining meters
    }

    // Display result
    printf("\nSum of distances = %d km and %d m\n", sum.km, sum.m);
    printf("\n");
    return 0;
}

