#include<stdio.h>
void main(){
	int i,n,s=0;
	printf("Enter a range: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s+=i;
	}
	printf("\nThe sum of %d numbers is %d\n\n",n,s);
}
