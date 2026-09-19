#include<stdio.h>
void main(){
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        printf("\nEnter Element %d: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nThe Array in reverse order is: ");
    for(int i=n-1; i>=0; i--)
        printf("%d ", a[i]);
    printf("\n\n");
}
