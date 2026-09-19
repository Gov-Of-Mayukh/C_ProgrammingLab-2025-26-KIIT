#include<stdio.h>
void main(){
    int a[5];
    int sum=0;
    printf("A is an array of size 5\n");
    for(int i=0; i<5; i++){
        printf("Enter Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nThe elements in the array are: ");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\nThe sum of the elements is: ");
    for(int i=0; i<5; i++){
        sum+=a[i];
    }
    printf("%d",sum);
    printf("\n\n");
}
