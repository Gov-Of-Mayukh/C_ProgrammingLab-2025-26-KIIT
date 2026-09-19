#include<stdio.h>
void main(){
    int n, a, shw, mykh;
    shw=0;
    printf("Enter Range: ");
    scanf("%d",&n);
    printf("\nEnter Number 1: ");
    scanf("%d",&a);
    mykh=a;
    for(int i=2; i<=n; i++){
        printf("\nEnter Number %d: ",i);
        scanf("%d", &a);
        if(a>shw)
            shw=a;
        if(a<mykh)
            mykh=a;
    }
    printf("\nThe Smallest is %d and The Largest is %d",mykh,shw);
    printf("\n\n");
}
