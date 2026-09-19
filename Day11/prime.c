#include<stdio.h>
#include<stdbool.h>
int shw(int x){
    int count=0;
    for(int i=1; i<=x/2; i++){
        if(x%i==0)
            count++;
    }
    if(count==1)
        return true;
    else
        return false;
}

void main(){
    int n;
    bool m;
    printf("Enter an int number: ");
    scanf("%d",&n);
    m=shw(n);
    if(m)
        printf("\nPrime Number");
    else
        printf("\nNot a prime number");
    printf("\n\n");
}
