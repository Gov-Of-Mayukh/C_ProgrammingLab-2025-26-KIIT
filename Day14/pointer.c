#include<stdio.h>
void main(){
    int shw=10, *p;
    p=&shw;
    printf("*p = %p", p);
    printf("\np = %d", *p);
    printf("\n\n");
}
