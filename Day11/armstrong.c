#include<stdio.h>
#include<math.h>

int shw(int x){
    int sum=0;
    while(x>0){
        sum+=pow(x%10,3);
        x/=10;
    }
    return sum;
}

void main(){
    int a, n;
    printf("Enter an int  number: ");
    scanf("%d",&n);
    a=shw(n);
    if(a==n)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
    printf("\n\n");
}
