#include<stdio.h>
void main(){
	int n,copy,s=1;
	printf("Enter Number: ");
	scanf("%d",&n);
	copy=s;
	if(n>0){
		for(int i=1;i<=n;i++){
			s*=i;
		}
		printf("\nThe factorial of %d is %d\n\n",copy,s);
	}
}
