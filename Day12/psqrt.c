#include<stdio.h>
#include<math.h>
int shw(int x){
    int sq;
    if(x<0){
        printf("\nImaginary Number\n");
        return 0;
    }
    sq=(sqrt(x));
    //sq=int(sq);
    if(pow(sq,2)==x || x==0)
        return 1;
    else
        return 0;
}

void main(){
    int n1;
    //printf("Returns 1 if 1st number is greater and returns 2 otherwise");
    printf("\nEnter an int numbers: ");
    scanf("%d",&n1);
    n1=shw(n1);
    if(n1)
        printf("\nPerfect Number");
    else
        printf("\nNot a Perfect Number");
    printf("\n\n");
}

