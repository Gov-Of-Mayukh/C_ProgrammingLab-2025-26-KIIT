#include<stdio.h>

int shw(int x, int y){
    int c;
    if(y>x){
        x=x+y;
        y=x-y;
        x=x-y;
    }
    for(int i=1; i<=x/2; i++){
        if(x%i==0 && y%i==0)
            c=i;
    }
    return c;
}

void main(){
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1, &n2);
    n1=shw(n1,n2);
    printf("The HCF is %d",n1);
    printf("\n\n");
}

