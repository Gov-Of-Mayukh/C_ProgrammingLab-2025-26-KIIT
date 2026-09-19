#include<stdio.h>

int shw(int a, int b){
    int fac;
    if(b>a){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    for(int i=1; i<=a/2; i++){
        if(a%i==0 && b%i==0)
            fac=i;
    }
    return fac;
}

void main(){
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d%d",&n1,&n2);
    n1=shw(n1, n2);
    printf("\nTheir HCF is: %d",n1);
    printf("\n\n");
}
