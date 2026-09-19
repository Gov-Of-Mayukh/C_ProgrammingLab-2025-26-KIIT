// ---FUNCTION PROTOTYPE---

#include<stdio.h>

float sum(int,int);     //Function Prototype

void main(){
    int a,b;
    printf("Enter 2 integer numbers: ");
    scanf("%d %d", &a, &b);
    a=sum(a,b);     //Function Calling
    printf("The sum of the two numbers is %d",a);
    printf("\n\n");
}

float sum(int a,int b){
    int s;
    s=a+b;
    return s;
}
