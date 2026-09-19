#include<stdio.h>

/*  ---- Without Using Pointer ----
void main(){
    int x=5, y=10;
    void swap(int, int);
    printf("Main, Before swap: %d %d", x, y);
    swap(x,y);
    printf("\nMain, After swap: %d %d", x, y);
    printf("\n\n");
}

void swap(int a, int b){
    int c;
    printf("\nInside swap(), Before swap: %d %d", a, b);
    c=a;
    a=b;
    b=c;
    printf("\nInside swap(), After swap: %d %d", a, b);
}*/

//  ----With Using Pointer ----
void main(){
    int x=5, y=10;
    void swap(int *, int *);
    printf("Main, Before swap: %d %d", x, y);
    swap(&x,&y);
    printf("\nMain, After swap: %d %d", x, y);
    printf("\n\n");
}

void swap(int *a, int *b){
    printf("\nInside swap(), Before swap: %d %d", *a, *b);
    *a = *a+*b;
    *b = *a-*b;
    *a = *a-*b;
    printf("\nInside swap(), After swap: %d %d", *a, *b);
}
