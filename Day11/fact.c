#include<stdio.h>

int shw(int x){
    int i, c=1;
    for(i=1; i<=x; i++){
        c*=i;
    }
    return c;
}

void main(){
    int n;
    printf("Enter an int  number: ");
    scanf("%d",&n);
    n=shw(n);
    printf("Factorial: %d",n);
    printf("\n\n");
}
