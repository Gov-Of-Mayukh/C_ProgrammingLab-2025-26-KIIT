#include<stdio.h>
void main(){
	int n,c,a=0,b=1;
	printf("Enter range: ");
	scanf("%d",&n);
	printf("\n%d %d",a,b);
	for(int i=1; i<=n; i++){
		c=a+b;
		a=b;
		b=c;
		printf(" %d",c);
	}
	printf("\n\n");
}
