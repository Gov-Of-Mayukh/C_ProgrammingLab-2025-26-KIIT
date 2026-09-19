#include<stdio.h>

void swap(float *x, float *y){
    float shw;
    shw=*x;
    *x=*y;
    *y=shw;
}

void main(){
    float a, b;
    printf("Enter 2 numbers: ");
    scanf("%f %f",&a,&b);
    printf("\nBefore Swapping: a=%f and b=%f",a,b);
    swap(&a,&b);
    printf("\nAfter Swapping: a=%f and b=%f",a,b);
    printf("\n\n");
}
