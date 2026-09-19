#include<stdio.h>
void main(){
	int n,i,copy,r,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	copy=n;
	while(n>0){
		r=n%10;
		sum+=r;
		n/=10;
	}
	printf("\nThe sum of digits of %d is %d\n\n",copy,sum);
}
