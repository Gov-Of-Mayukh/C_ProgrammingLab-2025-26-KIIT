#include<stdio.h>
void main(){
    int *p, **q, shw;
    printf("Enter a number: ");
    scanf("%d", &shw);
    p=&shw;
    q=&p;
    printf("\nAddress of shw: %p", &shw);
    printf("\nAddress of p: %p", &p);
    printf("\nAddress of q: %p", &q);
    printf("\nValue of shw: %d", shw);
    printf("\nValue of p: %d", *p);
    printf("\nValue of q: %d", **q);
    printf("\n\n");
}
