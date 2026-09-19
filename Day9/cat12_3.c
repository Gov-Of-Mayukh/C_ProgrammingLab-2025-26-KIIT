#include<stdio.h>
void main(){
    int i, j=0, n1, n2, shw=0, mykh;
    printf("Enter Range of Array 1: ");
    scanf("%d",&n1);
    int a1[n1];
    for(i=0; i<n1; i++){
        printf("Enter Element %d: ",i);
        scanf("%d",&a1[i]);
    }

    printf("\nEnter Range of Array 2: ");
    scanf("%d",&n2);
    int a2[n2], a3[n1+n2];

    for(i=0; i<n2; i++){
        printf("Enter Element %d: ",i);
        scanf("%d",&a2[i]);
    }

    printf("\nThe Elements of Array 1: ");
    for(i=0; i<n1; i++)
        printf("%d ",a1[i]);

    printf("\nThe Elements of Array 2: ");
    for(i=0; i<n2; i++)
        printf("%d ",a2[i]);

    for(i=0; i < n1; i++)
        a3[i]=a1[i];
    while(i< n1+n2){
        a3[i]=a2[j];
        j++;
        i++;
    }

    printf("\nThe Elements of Array 3: ");
    for(i=0; i < n1+n2; i++)
        printf("%d ",a3[i]);

    mykh=a3[0];
    for(i=0; i<n1+n2; i++){
        if(a3[i]>shw)
            shw=a3[i];
        if(a3[i]<mykh)
            mykh=a3[i];
    }
    printf("\n\nThe smallest element is %d and the largest element is %d",mykh,shw);

    printf("\n\n");
}
