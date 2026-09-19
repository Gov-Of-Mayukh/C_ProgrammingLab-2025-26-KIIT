#include<stdio.h>

int shw(int x){
    int sum=0;
    while(x>0){
        sum+=x%10;
        x/=10;
    }
    return sum;
}

void main(){
    int n;
    printf("Enter an int  number: ");
    scanf("%d",&n);
    n=shw(n);
    printf("Its Digital Root: %d",n);
    printf("\n\n");
}
