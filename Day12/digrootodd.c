#include<stdio.h>
#include<stdlib.h>

int shw(int x){
    int count=0, s=0;
    printf("\nThe digits at the odd position are: ");
    while(x>0){
        count++;
        if(count%2!=0){
            s+=x%10;
            printf("%d ",x%10);
        }
        x/=10;
    }
    return s;
}

void main(){
    int n1;
    //printf("Returns 1 if 1st number is greater and returns 2 otherwise");
    printf("\nEnter an int numbers: ");
    scanf("%d",&n1);
    n1=shw(abs(n1));
    printf("\nThe sum of the digits at odd position is %d",n1);
    printf("\n\n");
}

