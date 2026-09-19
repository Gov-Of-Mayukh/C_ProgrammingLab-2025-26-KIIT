#include<stdio.h>

int shw(int a[], int n){
    int sum=0;
    for(int i=0; i<n; i++)
        sum+=a[i];
    return sum;
}

void main(){
    int n;
    printf("Enter Range: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        printf("Enter a number: ");
        scanf("%d",&a[i]);
    }
    n=shw(a,n);
    printf("\nThe Sum of the Array is: %d",n);
    printf("\n\n");
}
