#include<stdio.h>
void main(){
    int i, n, so=0, se=0;
    printf("Enter Range: ");
    scanf("%d",&n);
    int shw[n];
    for(i=0; i<n; i++){
        printf("\nEnter Element %d: ",i);
        scanf("%d",&shw[i]);
    }

    printf("\nThe Elements of the array is: ");
    for(i=0;i<n;i++)
        printf("%d ",shw[i]);

    printf("\nThe Even Elements are: ");
    for(i=0;i<n;i++){
        if(shw[i]%2==0){
            printf("%d ",shw[i]);
            se+=shw[i];
        }
    }

    printf("\nThe Odd Elements are: ");
    for(i=0;i<n;i++){
        if(shw[i]%2!=0){
            printf("%d ",shw[i]);
            so+=shw[i];
        }
    }

    printf("\n\nThe Sum of Odd Numbers is %d and The Sum of Even Numbers is %d",so,se);
    printf("\n\n");
}
