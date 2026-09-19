// ---FUNCTION PROTOTYPE---

#include<stdio.h>

void sum();

void main(){
    sum();
}

void sum(){
    int a, b, s;
    printf("Enter 2 integer numbers: ");
    scanf("%d %d", &a, &b);
    s=a+b;
    printf("The sum of the two numbers is %d",s);
    printf("\n\n");
}
