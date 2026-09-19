#include<stdio.h>

int shw(int a[], int n){
    int max=a[0];
    for(int i=0; i<n; i++){
        if(a[i]>max)
            max=a[i];
    }
    return max;
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
    printf("\nThe Largest Number in the Array is: %d",n);
    printf("\n\n");
}
