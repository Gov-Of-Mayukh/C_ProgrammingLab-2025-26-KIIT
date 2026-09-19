#include<stdio.h>

int fact(int x);

void main(){
    int n, shw;
    printf("Enter a number: ");
    scanf("%d",&n);
    shw=fact(n);
    printf("\nFactorial: %d", shw);
    printf("\n\n");
}

int fact(int x){
    if(x==1)
        return 1;
    else
        return x*fact(x-1);
}
