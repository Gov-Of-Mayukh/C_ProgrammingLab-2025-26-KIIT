#include<stdio.h>

int shw(int x, int y){
    if(x>y)
        return 1;
    else
        return 2;
}

void main(){
    int n1,n2;
    printf("Returns 1 if 1st number is greater and returns 2 otherwise");
    printf("\nEnter two int numbers: ");
    scanf("%d %d",&n1,&n2);
    n1=shw(n1,n2);
    printf("\nReturn Value: %d",n1);
    printf("\n\n");
}

