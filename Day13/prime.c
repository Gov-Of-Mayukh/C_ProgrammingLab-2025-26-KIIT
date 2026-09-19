#include<stdio.h>
#include<stdbool.h>

int shw(int n){
    int count=0;
    for(int i=1; i<=n/2; i++){
        if(n%i==0)
            count++;
    }
    if(count==1)
        return 1;
    else
        return 0;
}

void main(){
    int a;
    bool mykh;
    printf("Enter a number: ");
    scanf("%d",&a);
    mykh=shw(a);
    if(mykh)
        printf("\n%d is a Prime Number",a);
    else
        printf("\n%d is not a Prime Number",a);
    printf("\n\n");
}
