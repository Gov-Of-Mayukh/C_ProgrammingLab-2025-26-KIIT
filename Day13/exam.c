//WAF to add two numbers without using agrs or returning any value

#include<stdio.h>
void sum(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a, &b);
    printf("\nThe sum of %d and %d is %d", a, b, a+b);
}

void main(){
    sum();
    printf("\n\n");
}
