#include<stdio.h>

int shw(int x){
    int a=1, b=2;
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    else
        return(shw(x-1) + shw(x-2));
}

void main(){
    int n,r;
    printf("Enter Range: ");
    scanf("%d", &n);
    printf("The fibonacci series upto %d is:", n);
    for(int i=0; i<n; i++)
        printf("%2d",shw(i));
    printf("\n\n");
}
