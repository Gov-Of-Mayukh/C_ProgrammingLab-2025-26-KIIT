#include<stdio.h>
void main(){
    int a[]={1,2,3,4,5}, *p, sum=0;
    p=a;
    printf("The Array is: ");
    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++){
        printf("%d ", a[i]);
        sum+=*p;
        p++;
    }
    printf("\nThe Sum of the array is: %d", sum);
    printf("\n\n");
}
