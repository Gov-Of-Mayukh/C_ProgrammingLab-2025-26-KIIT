#include<stdio.h>
void main(){
    int shw=0, mykh, n;
    printf("\nEnter Range: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("\nEnter Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    mykh=a[0];
    printf("Elements of the array are: ");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }

    for(int i=0; i<n; i++){
        if(a[i]>shw)
            shw=a[i];
        if(a[i]<mykh)
            mykh=a[i];
    }
    printf("\nThe Largest Number in the Array is %d ",shw);
    printf("\nThe Smallest Number in the Array is %d ",mykh);
    printf("\n\n");
}
