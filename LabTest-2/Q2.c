//Q2.
#include<stdio.h>

void sum(int arr[], int n){
    int s=0;
    for(int i=0; i<n; i++)
        s+=arr[i];
    printf("\nSum = %d", s);
}

void main(){
    int n;
    printf("Enter a range: ");
    scanf("%d", &n);
    int shw[n];
    for(int i=0; i<n; i++){
        printf("\nEnter element %d: ",i+1);
        scanf("%d",&shw[i]);
    }
    sum(shw,n);
    printf("\n\n");
}
