#include<stdio.h>

int shw(int x){
    int rev=0;
    while(x>0){
        rev=(rev*10)+(x%10);
        x/=10;
    }
    return rev;
}

void main(){
    int num;
    printf("Enter an int number: ");
    scanf("%d",&num);
    num=shw(num);
    printf("\nThe reverse is: %d",num);
    printf("\n\n");
}
