#include<stdio.h>
void main(){
	int n,copy,r,rev=0,sum=0;
	printf("Enter an integer: ");
	scanf("%d",&n);
	copy=n;
	if(n>0){
		while(n>0){
			r=n%10;
			sum+=r;
			rev=rev*10+r;
			n/=10;
		}
	printf("\nThe sum of the digits of %d is %d",copy,sum);
	if(rev==copy)
		printf("\n%d is a Palindrome Number\n\n",copy);
	else
		printf("\n%d is not a Palindrome Number\n\n",copy);
	}
	else
		printf("\nEnter a positive integer\n\n");
}
