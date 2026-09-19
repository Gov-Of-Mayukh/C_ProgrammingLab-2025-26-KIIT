#include<stdio.h>

int shw(int x){
    if(x==0)
        return 0;
    else
        return x+shw(x-1);
}

void main(){
    int num, r;
    printf("Enter a number: ");
    scanf("%d",&num);
    r=shw(num);
    printf("\nThe Sum from 1 upto %d is %d", num, r);
    printf("\n\n");
}
