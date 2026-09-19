#include<stdio.h>

void saptami(int shw[], int n){
    int *p, sum=0;
    p=shw;
    for(int i=0; i<n; i++){
        sum+=*p;
        p++;
    }
    printf("Their sum is: %d", sum);
}

void main(){
    int n;
    printf("Enter range of elements: ");
    scanf("%d",&n);
    int shw[n];
    for(int i=0; i<n; i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&shw[i]);
    }
    saptami(shw, n);
    printf("\n\n");
}
